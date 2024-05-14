SET(SOURCES screens/ui_Label_speed.c
    ui.c
    ui_helpers.c
    images/ui_img_82773809.c
    images/ui_img_speed_slider_png.c
    images/ui_img_slider_battery_png.c
    fonts/ui_font_Font1.c
    fonts/ui_font_M030.c
    fonts/ui_font_M050.c
    fonts/ui_font_MO16.c
    fonts/ui_font_MOKO18.c
    fonts/ui_font_MOKO210.c
    fonts/ui_font_MOKO8.c)

add_library(ui ${SOURCES})
