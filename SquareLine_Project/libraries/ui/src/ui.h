// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Label_speed
void ui_Label_speed_screen_init(void);
extern lv_obj_t * ui_Label_speed;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_Speed_Label;
extern lv_obj_t * ui_Labelkmh1;
extern lv_obj_t * ui_SliderSPEDD;
extern lv_obj_t * ui_SliderBAT;
extern lv_obj_t * ui_Percentlabel1;
extern lv_obj_t * ui_Percentlbel2;
extern lv_obj_t * ui_PercentLabel3;
extern lv_obj_t * ui_PercentLabel4;
extern lv_obj_t * ui_PercentLabel5;
extern lv_obj_t * ui_SpeedLabel1;
extern lv_obj_t * ui_ATTRIBUTE_1;
extern lv_obj_t * ui_ATTRIBUTE1;
extern lv_obj_t * ui_ATT1;
extern lv_obj_t * ui_ATTRIBUTE_2;
extern lv_obj_t * ui_ATT2;
extern lv_obj_t * ui_ATTRIBUTE3;
extern lv_obj_t * ui_ATT3;
extern lv_obj_t * ui_ATTRIBUTE4;
extern lv_obj_t * ui_ATT4;
extern lv_obj_t * ui_ATTRIBUTE5;
extern lv_obj_t * ui_ATT5;
extern lv_obj_t * ui_LabelSM;
extern lv_obj_t * ui_LabelSMM;
extern lv_obj_t * ui_LabelAM;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_LabelAH;
extern lv_obj_t * ui_LabelWH;
extern lv_obj_t * ui_LabelSOC;
extern lv_obj_t * ui_LabelPercent;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_82773809);    // assets\ebike_image (6).png
LV_IMG_DECLARE(ui_img_speed_slider_png);    // assets\speed_slider.png
LV_IMG_DECLARE(ui_img_slider_battery_png);    // assets\slider_battery.png

LV_FONT_DECLARE(ui_font_Font1);
LV_FONT_DECLARE(ui_font_M030);
LV_FONT_DECLARE(ui_font_M050);
LV_FONT_DECLARE(ui_font_MO16);
LV_FONT_DECLARE(ui_font_MOKO18);
LV_FONT_DECLARE(ui_font_MOKO210);
LV_FONT_DECLARE(ui_font_MOKO8);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
