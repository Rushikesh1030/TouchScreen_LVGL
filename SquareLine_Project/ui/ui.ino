#include <lvgl.h>
#include <TFT_eSPI.h>
#include <ui.h>
#include "TouchScreen.h"
#define YP 33  // must be an analog pin, use "An" notation!
#define XM 15  // must be an analog pin, use "An" notation!
#define YM 13  // can be a digital pin
#define XP 12   // can be a digital pin


#include <Wire.h> 
#include <Robojax_WCS.h>
#define MODEL 9 //see list above
#define SENSOR_PIN 34 //pin for reading sensor
#define SENSOR_VCC_PIN 8 //pin for powring up the sensor
#define ZERO_CURRENT_LED_PIN 2 //zero current LED pin

#define ZERO_CURRENT_WAIT_TIME 5000 //wait for 5 seconds to allow zero current measurement
#define CORRECTION_VLALUE 164 //mA
#define MEASUREMENT_ITERATION 100
#define VOLTAGE_REFERENCE  3300.0 //5000mv is for 5V
#define BIT_RESOLUTION 12
#define DEBUT_ONCE true

// For better pressure precision, we need to know the resistance
// between X+ and X- Use any multimeter to read it
// For the one we're using, its 300 ohms across the X plate
// TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);
static const uint16_t screenWidth  = 480;
static const uint16_t screenHeight = 320;
// static lv_disp_draw_buf_t draw_buf;
static lv_disp_drv_t disp_drv;   // Descriptor of a display driver
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * screenHeight / 10 ];
TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); 
TouchScreen touchInput = TouchScreen(XP, YP, XM, YM, 340);


TSPoint oldPoint;
TSPoint currPoint;
const float R1 = 100000.0;
const float R2 = 4700.0;
float Vin = 0.0;
float Vout = 0.0;
int value;
#define analogpin 36
double SOC;
float power;
int Ntcpin = 35;
int Vo;
float R5 = 10000.0;
float logR6, R6, T;
float c1 = 0.001129148, c2 = 0.000234125, c3 = 0.0000000876741;
// float midvolt = 2500;
// float voltage;
// float currentSensitivity =11.0;
// int sensor = 34;
// float current;
float WHH;
float AH;
float EM;
float SM;
lv_obj_t *label;
lv_obj_t *label1;
lv_obj_t *label2;

lv_obj_t *voltage_label;
lv_obj_t *soc_label;
lv_obj_t *temp_label;
lv_obj_t *curr_label;
lv_obj_t *po_label;
lv_obj_t *WH_label;
lv_obj_t *AH_label;
lv_obj_t *E_label;
lv_obj_t *S_label;

// #include <Wire.h> 
// #include <Robojax_WCS.h>
// #define MODEL 9 //see list above
// #define SENSOR_PIN 34 //pin for reading sensor
// #define SENSOR_VCC_PIN 8 //pin for powring up the sensor
// #define ZERO_CURRENT_LED_PIN 2 //zero current LED pin

// #define ZERO_CURRENT_WAIT_TIME 5000 //wait for 5 seconds to allow zero current measurement
// #define CORRECTION_VLALUE 164 //mA
// #define MEASUREMENT_ITERATION 100
// #define VOLTAGE_REFERENCE  3500.0 //5000mv is for 5V
// #define BIT_RESOLUTION 12
// #define DEBUT_ONCE true

Robojax_WCS sensor(
          MODEL, SENSOR_PIN, SENSOR_VCC_PIN, 
          ZERO_CURRENT_WAIT_TIME, ZERO_CURRENT_LED_PIN,
          CORRECTION_VLALUE, MEASUREMENT_ITERATION, VOLTAGE_REFERENCE,
          BIT_RESOLUTION, DEBUT_ONCE           
          );

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char * buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif


void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.endWrite();

    lv_disp_flush_ready( disp );
}


// void  (lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
// {
//     // a point object holds x y and z coordinates
//     currPoint = touchInput.getPoint();

//     pinMode(YP, OUTPUT); 
//     pinMode(XM, OUTPUT);

//     if (currPoint.z > touchInput.pressureThreshhold)
//     {
//         data->point.x = currPoint.x;
//         data->point.y = currPoint.y;
//         data->state = LV_INDEV_STATE_PR;
//         Serial.print("X = ");
//         Serial.print(currPoint.x);
//         Serial.print("\tY = ");
//         Serial.print(currPoint.y);
//         Serial.print("\tPressure = ");
//         Serial.println(currPoint.z);
//         // lv_label_set_text_fmt(touchPos, "X = %d : Y = %d", currPoint.x, currPoint.y);
//     }
//     else
//     {
//         data->state = LV_INDEV_STATE_REL;
//     }
// }

/*Read the touchpad*/
// void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
// {
//     uint16_t touchX = 0, touchY = 0;

//     bool touched = false;//tft.getTouch( &touchX, &touchY, 600 );

//     if( !touched )
//     {
//         data->state = LV_INDEV_STATE_REL;
//     }
//     else
//     {
//         data->state = LV_INDEV_STATE_PR;

//         /*Set the coordinates*/
//         data->point.x = touchX;
//         data->point.y = touchY;

//         Serial.print( "Data x " );
//         Serial.println( touchX );

//         Serial.print( "Data y " );
//         Serial.println( touchY );
//     }
// }

// void my_touchpad_read( lv_indev_drv_t * indev_drv, lv_indev_data_t * data )
// {
//       TSPoint p = ts.getPoint();

//       if (p.z > ts.pressureThreshhold) {
//         data->point.x = p.x;
//         data->point.y = p.y;
//         data->state = LV_INDEV_STATE_PR;
//     } else {
//         data->state = LV_INDEV_STATE_REL;
//     }
// }


void setup()
{

    Serial.begin( 115200 ); 

    String LVGL_Arduino = "Hello Arduino! ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    Serial.println( LVGL_Arduino );
    Serial.println( "I am LVGL_Arduino" );
    pinMode(analogpin, INPUT);
    pinMode(Ntcpin,INPUT);
    // pinMode(sensor,INPUT);

    lv_init();
    sensor.start();
    // touchInput.begin();

#if LV_USE_LOG != 0
    lv_log_register_print_cb( my_print ); 
#endif

    tft.begin();          
    tft.setRotation( 3 ); 

    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * screenHeight / 10 );


    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );

    static lv_indev_drv_t indev_drv; // Descriptor of a touch driver
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    // indev_drv.read_cb = getTouchInput;    
    // lv_indev_t *my_indev = lv_indev_drv_register(&indev_drv);


    ui_init();
 
    // sensor.start();


  label = lv_label_create(lv_scr_act());
  static lv_style_t text_style;
  lv_style_init(&text_style);
  lv_style_set_text_color(&text_style, lv_color_white());
  lv_style_set_text_font(&text_style, &lv_font_montserrat_24);

  voltage_label = lv_label_create(lv_scr_act());
  lv_obj_add_style(voltage_label, &text_style, LV_PART_MAIN);
  lv_label_set_text_fmt(voltage_label, " ", 0.0);
  lv_obj_align(voltage_label, LV_ALIGN_CENTER, 40, -75);

  soc_label = lv_label_create(lv_scr_act());
  lv_obj_add_style(soc_label, &text_style, LV_PART_MAIN);
  lv_label_set_text_fmt(soc_label, " %.2f ", 0.0);
  lv_obj_align(soc_label, LV_ALIGN_CENTER, 162, -75);

  AH_label = lv_label_create(lv_scr_act());
  lv_obj_add_style(AH_label, &text_style, LV_PART_MAIN);
  lv_label_set_text_fmt(AH_label, " ", 0.0);
  lv_obj_align(AH_label, LV_ALIGN_CENTER, 40, -30);

  WH_label = lv_label_create(lv_scr_act());
  lv_obj_add_style(WH_label, &text_style, LV_PART_MAIN);
  lv_label_set_text_fmt(WH_label, " ", 0.0);
  lv_obj_align(WH_label, LV_ALIGN_CENTER, 165, -30);

  // E_label = lv_label_create(lv_scr_act());
  // lv_obj_add_style(E_label, &text_style, LV_PART_MAIN);
  // lv_label_set_text_fmt(E_label, " ", 0.0);
  // lv_obj_align(E_label, LV_ALIGN_CENTER, 165,-30);

  curr_label = lv_label_create(lv_scr_act());
  lv_obj_add_style(curr_label, &text_style, LV_PART_MAIN);
  lv_label_set_text_fmt(curr_label, " ",0.0);
  lv_obj_align(curr_label, LV_ALIGN_CENTER, 40,20);

  po_label = lv_label_create(lv_scr_act());
  lv_obj_add_style(po_label,&text_style,LV_PART_MAIN);
  lv_label_set_text_fmt(po_label, " ",0.0);
  lv_obj_align(po_label, LV_ALIGN_CENTER, 160,20);

  label1 = lv_label_create(lv_scr_act());
  static lv_style_t text_style1;
  lv_style_init(&text_style1);
  lv_style_set_text_color(&text_style1, lv_color_white());
  lv_style_set_text_font(&text_style1, &lv_font_montserrat_34);

  
  temp_label = lv_label_create(lv_scr_act());
  lv_obj_add_style(temp_label, &text_style1, LV_PART_MAIN);
  lv_label_set_text_fmt(temp_label, " ", 0.0);
  lv_obj_align(temp_label, LV_ALIGN_CENTER, -40, -2);

  label2 = lv_label_create(lv_scr_act());
  static lv_style_t text_style2;
  lv_style_init(&text_style2);
  lv_style_set_text_color(&text_style2, lv_color_white());
  lv_style_set_text_font(&text_style2, &lv_font_montserrat_34);


  E_label = lv_label_create(lv_scr_act());
  lv_obj_add_style(E_label, &text_style, LV_PART_MAIN);
  lv_label_set_text_fmt(E_label, " ", 00);
  lv_obj_align(E_label, LV_ALIGN_CENTER, 45,70);

  
  S_label = lv_label_create(lv_scr_act());
  lv_obj_add_style(S_label, &text_style, LV_PART_MAIN);
  lv_label_set_text_fmt(S_label, " ", 00);
  lv_obj_align(S_label, LV_ALIGN_CENTER, 165,70);

}



void loop()
{
  measure_SOC();
  measure_temperature();
  measure_current();
  measure_power();
  measure_AH();
  measure_WH();
  eco_mode();
  // Eco_Mode();
  int value = analogRead(analogpin);
  Vout = (value * 3.3) / 4096.0;
  Vin = Vout / (R2 / (R1 + R2));

  char voltageStr[16];
  sprintf(voltageStr, " %.2f ", Vin);


  lv_label_set_text(voltage_label, voltageStr);

  lv_task_handler();
  delay(500);
}

void measure_SOC() {
   SOC = Vin / 54.6 * 100;
  if(SOC>=0.0){
    lv_slider_set_value(ui_SliderBAT, SOC, LV_ANIM_ON);
  

  char SoStr[16];
  sprintf(SoStr, " %.2f ", SOC);

  lv_label_set_text(soc_label, SoStr);
  
  lv_task_handler();
  delay(100);
}else{
   lv_slider_set_value(ui_SliderBAT, NULL, LV_ANIM_ON);
   lv_label_set_text(soc_label, "0.00");
  //  lv_task_handler();
  //  delay(500);
}
}

void measure_temperature() {
  Vo = analogRead(Ntcpin);
  R6 = R5 * (4096.0 / (float)Vo - 1.0);
  logR6 = log(R6);
  T = (1.0 / (c1 + c2 * logR6 + c3 * logR6 * logR6 * logR6));
  T = T - 273.15;
  if(T>=0.0){
    lv_slider_set_value(ui_SliderSPEDD, T, LV_ANIM_ON);

  char VStr[16];
  sprintf(VStr , "%.2f ",T);

  lv_label_set_text(temp_label, VStr);
  lv_task_handler();
  delay(100);
}else{
   lv_slider_set_value(ui_SliderSPEDD, NULL, LV_ANIM_ON);
   lv_label_set_text(temp_label, "0.00");
//    lv_task_handler();
//    delay(500);
}
}

void measure_current()  {
  //   int temp;
  //   long int average_curr = 0;
  //   for (int i = 0; i <= 3299; i++)
  // {
  //   temp = analogRead(sensor);
  //   average_curr = average_curr + temp;   
  // }
  // average_curr = average_curr / 3300;
  // // voltage = average_curr * (4999.0 / 4080.0);

  // voltage = average_curr * (3299.0/ 2690.0);
  // current = ((voltage) - midvolt) / (currentSensitivity);
  if(sensor.getCurrent() >=0.10){
    char CStr[16];
    sprintf(CStr , "%.2f ",sensor.getCurrent());

    lv_label_set_text(curr_label, CStr);
    lv_task_handler();
    delay(100);
  }else{
    // lv_slider_set_value(ui_SliderSPEDD, NULL, LV_ANIM_ON);
    lv_label_set_text(curr_label, "0.00");
  }

  // lv_label_set_text(curr_label, CStr);
  // lv_task_handler();
  // delay(1000);

}
void measure_power(){
  power = Vin * sensor.getCurrent();
  if(power>=5.00){
  char pStr[16];
  sprintf(pStr, "%.2f", power);
  lv_label_set_text(po_label ,pStr);
  lv_task_handler();
  delay(100);
  }else{
    lv_label_set_text(po_label, "0.00");
  }

}
void measure_AH(){
  
   AH += sensor.getCurrent() * (1.0 / 3600.0); 
   if(AH>=0.0){
    char AStr[16];
    sprintf(AStr, " %.2f ", AH);
    lv_label_set_text(AH_label, AStr);
    lv_task_handler();
    delay(100);
  // char pStr[16];
  // sprintf(pStr, "%.2f", power);
  // lv_label_set_text(po_label ,pStr);
  // lv_task_handler();
  // delay(500);
  }else{
    lv_label_set_text(AH_label, "0.00");
  }
}

void measure_WH(){
  WHH += Vin* sensor.getCurrent() * 0.001;
   if(WHH>=0.0){
    char WStr[16];
    sprintf(WStr, " %.2f ", WHH);
    lv_label_set_text(WH_label, WStr);
    lv_task_handler();
    delay(100);

}else{
  lv_label_set_text(WH_label, "0.00");
}
}

void eco_mode(){
    if (WHH <= 0.000) {
    EM = 0;
    SM = 0;
  } else if (WHH >=0.000  && WHH < 12.775) {
    // RP = 1;
    EM = 0;
    SM = 0;
    
  } else if (WHH >= 12.775 && WHH < 25.550) {
    // RP = 2;
    EM = 1;
    SM = 1;
    
  } else if (WHH >= 25.550 && WHH < 38.325) {
    // RP = 4;
    EM = 1;
    SM = 0;
    
  } else if (WHH >= 38.325 && WHH < 51.100) {
    // RP = 5;
    EM = 2;
    SM = 2;
    
  } else if (WHH >= 51.100 && WHH < 63.875) {
    // RP = 6;
    EM = 2;
    SM = 1;
    
  } else if (WHH >= 63.875 && WHH < 76.650) {
    // RP = 7;
    EM = 3;
    SM = 2;
  } else if (WHH >= 76.650 && WHH < 89.425) {
    // RP = 8;
    EM = 3;
    SM = 2;
    
  } else if (WHH >= 89.425 && WHH < 102.200) {
    // RP = 9;
    EM =  4;
    SM =  3;
    
  } else if (WHH >= 102.200 && WHH < 114.975) {
    // RP = 10;
    EM = 5;
    SM = 4;
    
  } else if (WHH >= 114.975 && WHH < 127.750) {
    // RP = 11;
    EM = 5;
    SM = 3;
    
  } else if (WHH >= 127.750 && WHH < 140.525) {
    // RP = 12;
    EM = 6;
    SM = 5;
    
  } else if (WHH >= 140.525 && WHH < 153.300) {
    // RP = 13;
    EM = 6;
    SM = 4;
    
  } else if (WHH >= 153.300 && WHH < 166.075) {
    // RP = 14;
    EM = 7;
    SM = 6;
    
  } else if (WHH >= 166.075 && WHH < 178.850) {
    // RP = 15;
    EM = 7;
    SM = 5;
    
  } else if (WHH >= 178.850 && WHH < 191.625) {
    // RP = 16;
    EM = 8;
    SM = 6;
    
  } else if (WHH >= 191.625 && WHH < 204.400) {
    // RP = 17;
    EM = 9;
    SM = 7;
  } else if (WHH >= 204.400 && WHH < 217.175) {
    // RP = 18;
    EM = 9;
    SM = 7;
    
  } else if (WHH >= 217.175 && WHH < 229.950) {
    // RP = 19;
    EM = 10;
    SM = 8;
    
  } else if (WHH >= 229.950 && WHH < 242.725) {
    // RP = 20;
    EM = 10;
    SM = 8;
    
  } else if (WHH >= 242.725 && WHH < 255.500) {
    // RP = 21;
    EM = 11;
    SM = 9;
  }
  else if (WHH >= 255.500 && WHH < 268.275) {
    // RP = 22;
    EM = 11;
    SM = 10;
    
  } else if (WHH >= 268.275 && WHH < 281.050) {
    // RP= 23;
    EM = 12;
    SM = 10;
    
  } else if (WHH >= 281.050 && WHH < 293.825) {
    // RP = 24;
    EM = 13;
    SM = 10;
    
  } else if (WHH >= 293.825 && WHH < 306.600) {
    // RP = 25;
    EM = 13;
    SM = 10;
    
  } else if (WHH >= 306.600 && WHH < 319.375) {
    // RP = 26;
    EM = 14;
    SM = 11;
    
  } else if (WHH >= 319.375 && WHH < 332.150) {
    // RP = 27;
    EM = 14;
    SM = 11;
  } else if (WHH >= 332.150 && WHH < 344.925) {
    // RP = 28;
    EM = 15;
    SM = 12;
    
  } else if (WHH >= 344.925 && WHH < 357.700) {
    // RP = 29;
    EM = 15;
    SM = 12;
    
  } else if (WHH >= 357.700 && WHH < 370.475) {
    // RP = 30;
    EM = 16;
    SM = 13;
    
  } else if (WHH >= 370.475 && WHH < 383.250) {
    // RP =40;
    EM =17;
    SM =14;
  }else if (WHH >= 383.250 && WHH < 396.025) {
    // RP = 41;
    EM = 17;
    SM = 13;
    
  } else if (WHH >= 396.025 && WHH < 408.800) {
    // RP = 42;
    EM = 18;
    SM = 15;
    
  } else if (WHH >= 408.800 && WHH < 421.575) {
    // RP = 43;
    EM = 18;
    SM = 14;
    
  } else if (WHH >= 421.575 && WHH < 434.350) {
    // RP = 44;
    EM = 19;
    SM = 15;
    
  } else if (WHH >= 434.350 && WHH < 447.125) {
    // RP = 45;
    EM = 19;
    SM = 15;
    
  } else if (WHH >= 447.125 && WHH < 459.900) {
    // RP = 46;
    EM = 20;
    SM = 16;
  } else if (WHH >= 459.900 && WHH < 472.675) {
    // RP = 47;
    EM = 20;
    SM = 16;
    
  } else if (WHH >= 472.675 && WHH < 485.450) {
    // RP = 48;
    EM = 21;
    SM = 17;
    
  } else if (WHH >= 485.450 && WHH < 498.225) {
    // RP = 49;
    EM = 21;
    SM = 17;
    
  } else if (WHH >= 498.225 && WHH < 511.000) {
    // RP = 50;
    EM = 22;
    SM = 18;
  }else if (WHH >= 511.000 && WHH < 523.775) {
    // RP = 51;
    EM = 22;
    SM = 18;
    
  } else if (WHH >= 523.775 && WHH < 536.350) {
    // RP = 52;
    EM = 23;
    SM = 19;
    
  } else if (WHH >= 536.550 && WHH <549.325 ) {
    // RP = 53;
    EM = 23;
    SM = 19;
    
  } else if (WHH >= 549.325 && WHH < 562.100) {
    // RP = 54;
    EM = 24;
    SM = 20;
    
  } else if (WHH >= 562.100 && WHH < 574.875) {
    // RP = 55;
    EM = 25;
    SM = 21;
    
  } else if (WHH >= 574.875 && WHH < 587.650) {
    // RP = 56;
    EM = 25;
    SM = 20;
  } else if (WHH >= 587.650 && WHH < 600.425) {
    // RP = 57;
    EM = 26;
    SM = 22;
    
  } else if (WHH >= 600.425 && WHH < 613.200) {
    // RP = 58;
    EM = 26;
    SM = 21;
    
  } else if (WHH >= 613.200 && WHH < 625.975) {
    // RP = 59;
    EM = 27;
    SM = 23;
    
  } else if (WHH >= 625.975 && WHH < 638.750) {
    // RP = 60;
    EM = 27;
    SM = 22;
  }  
   else if (WHH >= 638.750 && WHH < 651.525) {
    // RP = 61;
    EM = 28;
    SM = 23;
    
  } else if (WHH >= 651.525 && WHH < 664.300) {
    // RP = 62;
    EM = 29;
    SM = 24;
    
  } else if (WHH >= 664.300 && WHH < 677.075) {
    // RP = 63;
    EM = 29;
    SM = 24;
    
  } else if (WHH >= 677.075 && WHH < 689.850) {
    // RP = 64;
    EM = 30;
    SM = 25;
    
  } else if (WHH >= 689.850 && WHH < 702.625) {
    // RP = 65;
    EM = 30;
    SM = 25;
    
  } else if (WHH >= 702.625 && WHH < 715.400) {
    // RP = 66;
    EM = 31;
    SM = 26;
  } else if (WHH >= 715.400 && WHH < 728.175) {
    // RP = 67;
    EM = 31;
    SM = 26;
    
  } else if (WHH >= 728.175 && WHH < 740.950) {
    // RP = 68;
    EM = 32;
    SM = 27;
    
  } else if (WHH >= 740.950 && WHH < 753.725) {
    // RP = 69;
    EM = 33;
    SM = 28;
    
  } else if (WHH >= 753.725 && WHH < 766.500) {
    // RP = 70;
    EM = 33;
    SM = 27;
  }else if (WHH >= 766.500 && WHH < 779.275) {
    // RP = 71;
    EM = 34;
    SM = 29;
    
  } else if (WHH >= 779.275 && WHH < 792.050) {
    // RP = 72;
    EM = 34;
    SM = 28;
    
  } else if (WHH >= 792.050 && WHH < 804.825) {
    // RP = 73;
    EM = 35;
    SM = 29;
    
  } else if (WHH >= 804.825 && WHH < 817.600) {
    // RP = 74;
    EM = 35;
    SM = 29;
    
  } else if (WHH >= 817.600 && WHH < 830.375) {
    // RP = 75;
    EM = 36;
    SM = 30;
    
  } else if (WHH >= 830.375 && WHH <843.150) {
    // RP = 76;
    EM = 37;
    SM = 31;
  } else if (WHH >= 843.150 && WHH < 855.925) {
    // RP = 77;
    EM = 37;
    SM = 30;
    
  } else if (WHH >= 855.925 && WHH < 868.700) {
    // RP = 78;
    EM = 38;
    SM = 32;
    
  } else if (WHH >= 868.700 && WHH < 881.475) {
    // RP = 79;
    EM = 38;
    SM = 31;
    
  } else if (WHH >= 881.475 && WHH < 894.250) {
    // RP = 80;
    EM = 39;
    SM = 33;
  }else if (WHH >= 894.250 && WHH < 907.025) {
    // RP = 81;
    EM = 39;
    SM = 32;
    
  } else if (WHH >= 907.025 && WHH < 919.800) {
    // RP = 82;
    EM = 40;
    SM = 33;
    
  } else if (WHH >= 919.800 && WHH < 932.575) {
    // RP = 83;
    EM = 40;
    SM = 33;
    
  } else if (WHH >= 932.575 && WHH < 945.350) {
    // RP = 84;
    EM = 41;
    SM = 34;
    
  } else if (WHH >= 945.350 && WHH < 958.125) {
    // RP = 85;
    EM = 41;
    SM = 34;
    
  } else if (WHH >= 958.125 && WHH < 970.900) {
    // RP = 86;
    EM = 42;
    SM = 35;
  } else if (WHH >= 970.900 && WHH < 983.675) {
    // RP = 87;
    EM = 42;
    SM = 35;
    
  } else if (WHH >= 983.675 && WHH < 996.450) {
    // RP = 87;
    EM = 43;
    SM = 36;
    
  } else if (WHH >= 996.450 && WHH < 1009.225) {
    // RP = 88;
    EM = 43;
    SM = 35;
    
  } else if (WHH >= 1009.225 && WHH < 1022.000) {
    // RP = 89;
    EM = 44;
    SM = 36;
  }else if (WHH >= 1022.000 && WHH < 1034.775) {
    // RP = 90;
    EM = 45;
    SM = 37;
    
  } else if (WHH >= 1034.775 && WHH < 1047.550) {
    // RP = 91;
    EM = 45;
    SM = 37;
    
  } else if (WHH >= 1047.550 && WHH < 1060.325) {
    // RP = 92;
    EM = 46;
    SM = 38;
    
  } else if (WHH >= 1060.325 && WHH < 1073.100) {
    // RP = 93;
    EM = 46;
    SM = 38;
    
  } else if (WHH >= 1073.100 && WHH < 1085.875) {
    // RP = 94;
    EM = 47;
    SM = 39;
    
  } else if (WHH >=1085.875 && WHH < 1098.650) {
    // RP = 95;
    EM = 47;
    SM = 39;
  } else if (WHH >= 1098.650 && WHH < 1111.425) {
    // RP = 96;
    EM = 48;
    SM = 39;
    
  } else if (WHH >= 1111.425 && WHH < 1124.200) {
    // RP = 97;
    EM = 49;
    SM = 40;
    
  } else if (WHH >= 1124.200 && WHH < 1136.975) {
    // RP = 98;
    EM = 49;
    SM = 40;
    
  } else if (WHH >= 1136.975 && WHH < 1149.750) {
    // RP = 99;
    EM = 50;
    SM = 41;
  }else if (WHH >= 1149.750 && WHH < 1162.525) {
    // RP = 100;
    EM = 50;
    SM = 41;
  }else if (WHH >= 1162.525 && WHH < 1175.300) {
  //   // RP = 100;
    EM = 51;
    SM = 42;    
  }else if (WHH >= 1175.300 && WHH < 1188.075) {
    // RP = 100;
    EM = 51;
    SM = 42;

  }else if (WHH >= 1188.075 && WHH < 1200.850) {
    // RP = 100;
    EM = 52;
    SM = 43;

  }else if (WHH >= 1200.850 && WHH < 1213.625) {
    // RP = 100;
    EM = 53;
    SM = 43;
  }else if (WHH >= 1213.625 && WHH < 1226.400) {
    // RP = 100;
    EM = 53;
    SM = 43;
  }else if (WHH >= 1226.400 && WHH < 1239.175) {
    // RP = 100;
    EM = 54;
    SM = 44;

  }else if (WHH >= 1239.175 && WHH < 1251.950) {
    // RP = 100;
    EM = 54;
    SM = 44;

  }else if (WHH >= 1251.950 && WHH < 1264.725) {
    // RP = 100;
    EM = 55;
    SM = 45;

  }else if (WHH >= 1264.725 && WHH < 1277.500) {
    // RP = 100;
    EM = 55;
    SM = 45;

  }else if (WHH >= 1277.500 && WHH < 1290.275) {
    // RP = 100;
    EM = 56;
    SM = 46;

  }else if (WHH >= 1290.275 && WHH < 1303.050) {
    // RP = 100;
    EM = 57;
    SM = 47;

  }else if (WHH >= 1303.050 && WHH < 1315.825) {
    // RP = 100;
    EM = 57;
    SM = 46;

  }else if (WHH >= 1315.825 && WHH < 1328.600) {
    // RP = 100;
    EM = 58;
    SM = 48;

  }else if (WHH >= 1328.600 && WHH < 1341.375) {
    // RP = 100;
    EM = 58;
    SM = 47; 
  }else if (WHH >= 1328.600 && WHH < 1341.375) {
    // RP = 100;
    EM = 58;
    SM = 47;    
  }else if (WHH >= 1328.600 && WHH < 1341.375) {
    // RP = 100;
    EM = 58;
    SM = 47;     
  }else if (WHH >= 1328.600 && WHH < 1341.375) {
    // RP = 100;
    EM = 58;
    SM = 47;     
  }else if (WHH >= 1328.600 && WHH < 1341.375) {
    // RP = 100;
    EM = 58;
    SM = 47;       

  }else if (WHH >= 1341.375 && WHH < 1354.150) {
    // RP = 100;
    EM = 59;
    SM = 49;     

  }else if (WHH >= 1354.150 && WHH < 1366.925) {
    // RP = 100;
    EM = 59;
    SM = 48;         

  }else if (WHH >= 1366.925 && WHH < 1379.700) {
    // RP = 100;
    EM = 60;
    SM = 49;     

  }else if (WHH >= 1379.700 && WHH < 1392.475) {
    // RP = 100;
    EM = 60;
    SM = 49;     

  }else if (WHH >= 1405.250 && WHH < 1418.025) {
    // RP = 100;
    EM = 61;
    SM = 50;           
  }else if (WHH >= 1418.025 && WHH < 1430.800) {
    // RP = 100;
    EM = 62;
    SM = 51;       

  }else if (WHH >= 1430.800 && WHH < 1443.575) {
    // RP = 100;
    EM = 62;
    SM = 51;     

  }else if (WHH >= 1443.575 && WHH < 1456.350) {
    // RP = 100;
    EM = 63;
    SM = 52;     

  }else if (WHH >= 1456.350 && WHH < 1469.125) {
    // RP = 100;
    EM = 63;
    SM = 52;     

  }else if (WHH >= 1469.125 && WHH < 1481.900) {
    // RP = 100;
    EM = 64;
    SM = 53;     

  }else if (WHH >= 1481.900 && WHH < 1494.675) {
    // RP = 100;
    EM = 65;
    SM = 53;     

  }else if (WHH >= 1494.675 && WHH < 1507.450) {
    // RP = 100;
    EM = 65;
    SM = 53;     

  }else if (WHH >= 1507.450 && WHH < 1520.225) {
    // RP = 100;
    EM = 66;
    SM = 54;     

  }else if (WHH >= 1520.225 && WHH < 1533.000) {
    // RP = 100;
    EM = 66;
    SM = 54;     

  }else if (WHH >= 1533.000 && WHH < 1545.775) {
    // RP = 100;
    EM = 67;
    SM = 55;     

  }else if (WHH >= 1545.775 && WHH < 1558.550) {
    // RP = 100;
    EM = 67;
    SM = 55;     

  }else if (WHH >= 1558.550 && WHH < 1571.325) {
    // RP = 100;
    EM = 68;
    SM = 56;     

  }else if (WHH >= 1571.325 && WHH < 1584.100) {
    // RP = 100;
    EM = 69;
    SM = 56;     

  }else if (WHH >= 1584.100 && WHH < 1596.875) {
    // RP = 100;
    EM = 69;
    SM = 56;     

  }else if (WHH >= 1596.875 && WHH < 1609.650) {
    // RP = 100;
    EM = 70;
    SM = 57;     

  }else if (WHH >= 1609.650 && WHH < 1622.425) {
    // RP = 100;
    EM = 70;
    SM = 57;     

  }else if (WHH >= 1622.425 && WHH < 1635.200) {
    // RP = 100;
    EM = 71;
    SM = 58;     

  }else if (WHH >= 1635.200 && WHH < 1647.975) {
    // RP = 100;
    EM = 71;
    SM = 58;     

  }else if (WHH >= 1647.975 && WHH < 1660.750) {
    // RP = 100;
    EM = 72;
    SM = 59;     

  }else if (WHH >= 1660.750 && WHH < 1673.525) {
    // RP = 100;
    EM = 73;
    SM = 59;     

  }else if (WHH >= 1673.525 && WHH < 1686.300) {
    // RP = 100;
    EM = 73;
    SM = 59;     

  }else if (WHH >= 1686.300 && WHH < 1699.075) {
    // RP = 100;
    EM = 74;
    SM = 60;     

  }else if (WHH >= 1699.075 && WHH < 1711.850) {
    // RP = 100;
    EM = 74;
    SM = 60;     

  }else if (WHH >= 1711.850 && WHH < 1724.625) {
    // RP = 100;
    EM = 75;
    SM = 61;     

  }else if (WHH >= 1724.625 && WHH < 1737.400) {
    // RP = 100;
    EM = 75;
    SM = 61;     

  }else if (WHH >= 1737.400 && WHH < 1750.175) {
    // RP = 100;
    EM = 76;
    SM = 62;     
  }else if (WHH >= 1750.175 && WHH < 1762.950) {
    // RP = 100;
    EM = 77;
    SM = 63;     

  }else if (WHH >= 1762.950 && WHH < 1775.725) {
    // RP = 100;
    EM = 77;
    SM = 62;     

  }else if (WHH >= 1775.725 && WHH < 1788.500) {
    // RP = 100;
    EM = 78;
    SM = 63;     

  }else if (WHH >= 1788.500 && WHH < 1801.275) {
    // RP = 100;
    EM = 78;
    SM = 63;     

  }else if (WHH >= 1801.275 && WHH < 1814.050) {
    // RP = 100;
    EM = 79;
    SM = 64;     

  }else if (WHH >= 1814.050 && WHH < 1826.825) {
    // RP = 100;
    EM = 79;
    SM = 64;     

  }else if (WHH >= 1826.825 && WHH < 1839.600) {
    // RP = 100;
    EM = 80;
    SM = 65;     

  }else if (WHH >= 1839.600 && WHH < 1852.375) {
    // RP = 100;
    EM = 80;
    SM = 65;     

  }else if (WHH >= 1852.375 && WHH < 1865.150) {
    // RP = 100;
    EM = 81;
    SM = 66;     

  }else if (WHH >= 1865.150 && WHH < 1877.925) {
    // RP = 100;
    EM = 81;
    SM = 66;     


  }else if (WHH >= 1877.925 && WHH < 1890.700) {
    // RP = 100;
    EM = 82;
    SM = 67;     

  }else if (WHH >= 1890.700 && WHH < 1903.475) {
    // RP = 100;
    EM = 82;
    SM = 67;     

  }else if (WHH >= 1903.475 && WHH < 1916.250) {
    // RP = 100;
    EM = 83;
    SM = 68;

  }else if (WHH >= 1916.250 && WHH < 1929.025) {
    // RP = 100;
    EM = 83;
    SM = 68;     

  }else if (WHH >= 1929.025 && WHH < 1941.800) {
    // RP = 100;
    EM = 84;
    SM = 69;     

  }else if (WHH >= 1941.800 && WHH < 1954.575) {
    // RP = 100;
    EM = 84;
    SM = 69;     

  }else if (WHH >= 1954.575 && WHH < 1967.350) {
    // RP = 100;
    EM = 85;
    SM = 70;                    

  }else if (WHH >= 1967.350 && WHH < 1980.125) {
    // RP = 100;
    EM = 85;
    SM = 70;     

  }else if (WHH >= 1980.125 && WHH < 1992.900) {
    // RP = 100;
    EM = 86;
    SM = 71;     

  }else if (WHH >= 1992.900 && WHH < 2005.675) {
    // RP = 100;
    EM = 86;
    SM = 71;     

  }else if (WHH >= 2005.675 && WHH < 2018.450) {
    // RP = 100;
    EM = 87;
    SM = 72;     

  }else if (WHH >= 2018.450 && WHH < 2031.225) {
    // RP = 100;
    EM = 87;
    SM = 72;     

  }else if (WHH >= 2031.225 && WHH < 2044.000) {
    // RP = 100;
    EM = 88;
    SM = 73;     

  }else if (WHH >= 2044.000 && WHH < 2056.775) {
    // RP = 100;
    EM = 88;
    SM = 73;
  }
  if(EM>=0.0){
    char zStr[16];
    sprintf(zStr , "%.2f ",EM);

    lv_label_set_text(E_label, zStr);
    lv_task_handler();
    delay(100);
  }else{
    lv_label_set_text(E_label, "00");
  }

   if(SM>=0.0){
    char eStr[16];
    sprintf(eStr , "%.2f ",SM);

    lv_label_set_text(S_label, eStr);
    lv_task_handler();
    delay(100);
  }else{
   
    lv_label_set_text(S_label, "00");
  }
}         


         