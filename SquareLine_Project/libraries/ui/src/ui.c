// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////

// SCREEN: ui_Label_speed
void ui_Label_speed_screen_init(void);
lv_obj_t * ui_Label_speed;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Speed_Label;
lv_obj_t * ui_Labelkmh1;
lv_obj_t * ui_SliderSPEDD;
lv_obj_t * ui_SliderBAT;
lv_obj_t * ui_Percentlabel1;
lv_obj_t * ui_Percentlbel2;
lv_obj_t * ui_PercentLabel3;
lv_obj_t * ui_PercentLabel4;
lv_obj_t * ui_PercentLabel5;
lv_obj_t * ui_SpeedLabel1;
lv_obj_t * ui_ATTRIBUTE_1;
lv_obj_t * ui_ATTRIBUTE1;
lv_obj_t * ui_ATT1;
lv_obj_t * ui_ATTRIBUTE_2;
lv_obj_t * ui_ATT2;
lv_obj_t * ui_ATTRIBUTE3;
lv_obj_t * ui_ATT3;
lv_obj_t * ui_ATTRIBUTE4;
lv_obj_t * ui_ATT4;
lv_obj_t * ui_ATTRIBUTE5;
lv_obj_t * ui_ATT5;
lv_obj_t * ui_LabelSM;
lv_obj_t * ui_LabelSMM;
lv_obj_t * ui_LabelAM;
lv_obj_t * ui_Label1;
lv_obj_t * ui_LabelAH;
lv_obj_t * ui_LabelWH;
lv_obj_t * ui_LabelSOC;
lv_obj_t * ui_LabelPercent;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Label_speed_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Label_speed);
}
