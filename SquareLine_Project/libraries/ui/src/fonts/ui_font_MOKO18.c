/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font C:\Users\Lenovo\Downloads\e_square\assets\Mokoto-Demo.ttf -o C:\Users\Lenovo\Downloads\e_square\assets\ui_font_MOKO18.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_MOKO18
#define UI_FONT_MOKO18 1
#endif

#if UI_FONT_MOKO18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xcf,

    /* U+0022 "\"" */
    0xde, 0xd2, 0x0,

    /* U+0023 "#" */
    0x33, 0xc, 0xc3, 0x33, 0xff, 0xff, 0xcc, 0xc3,
    0x33, 0xff, 0xff, 0xcc, 0xc3, 0x30,

    /* U+0024 "$" */
    0xc, 0x6, 0x1f, 0xff, 0xfc, 0xc6, 0x63, 0x31,
    0xfe, 0x7f, 0x86, 0xc3, 0x61, 0xbf, 0xff, 0xf8,
    0x30, 0x18,

    /* U+0025 "%" */
    0x0, 0x9f, 0x32, 0x24, 0x45, 0x88, 0xb1, 0xfc,
    0x1, 0x80, 0x20, 0xf, 0xe1, 0xc4, 0x68, 0x8d,
    0xf1, 0x0,

    /* U+0026 "&" */
    0x7f, 0x7, 0xf0, 0x63, 0x6, 0x30, 0x7f, 0x3,
    0xe0, 0x7e, 0xee, 0xfc, 0xc3, 0x8c, 0x3c, 0xff,
    0xe7, 0xe7,

    /* U+0027 "'" */
    0xf4,

    /* U+0028 "(" */
    0x37, 0xec, 0xcc, 0xcc, 0xcc, 0xcc, 0xce, 0x73,

    /* U+0029 ")" */
    0xe7, 0x8e, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x9f, 0xdc,

    /* U+002A "*" */
    0x33, 0xff, 0xde, 0xfc, 0x0,

    /* U+002B "+" */
    0x37, 0xfe, 0x63, 0x0,

    /* U+002C "," */
    0xf4,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x4, 0x8, 0x30, 0x60, 0x83, 0x4, 0x18, 0x30,
    0xc1, 0x82, 0xc, 0x0,

    /* U+0030 "0" */
    0x3f, 0x8f, 0xfb, 0x61, 0xee, 0x3c, 0xc7, 0x9c,
    0xf1, 0x9e, 0x33, 0xc7, 0x78, 0x6d, 0xff, 0x1f,
    0xc0,

    /* U+0031 "1" */
    0xfd, 0xb6, 0xdb, 0x6d, 0xb0,

    /* U+0032 "2" */
    0x7f, 0xcf, 0xfc, 0x1, 0x80, 0x30, 0x6, 0xff,
    0xff, 0xf6, 0x0, 0xc0, 0x18, 0x3, 0xff, 0xff,
    0xf0,

    /* U+0033 "3" */
    0xff, 0xdf, 0xfc, 0x1, 0x80, 0x30, 0x6, 0xff,
    0xdf, 0xf8, 0x3, 0x0, 0x60, 0xf, 0xff, 0xff,
    0xe0,

    /* U+0034 "4" */
    0x1, 0xe0, 0x1f, 0x1, 0xd8, 0x1c, 0xc3, 0xc6,
    0x3c, 0x33, 0x81, 0x9f, 0xff, 0x7f, 0xf8, 0x3,
    0x0, 0x18, 0x0, 0xc0,

    /* U+0035 "5" */
    0xff, 0xdf, 0xfb, 0x0, 0x60, 0xc, 0x1, 0xff,
    0xbf, 0xf8, 0x3, 0x0, 0x60, 0xf, 0xff, 0xff,
    0xe0,

    /* U+0036 "6" */
    0x3f, 0xcf, 0xfb, 0x0, 0x60, 0xc, 0x1, 0x9f,
    0xb3, 0xfe, 0x3, 0xc0, 0x78, 0xd, 0xff, 0x9f,
    0xe0,

    /* U+0037 "7" */
    0xff, 0xff, 0xfc, 0x3, 0x80, 0x70, 0x1c, 0x7,
    0x1, 0xc0, 0x70, 0x1c, 0x3, 0x80, 0xe0, 0x38,
    0x0,

    /* U+0038 "8" */
    0x7f, 0xef, 0xff, 0xc0, 0x3c, 0x3, 0xc0, 0x3f,
    0xff, 0xff, 0xfc, 0x3, 0xc0, 0x3c, 0x3, 0xff,
    0xf7, 0xfe,

    /* U+0039 "9" */
    0x7f, 0x9f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0xfc,
    0xdf, 0x98, 0x3, 0x0, 0x60, 0x1d, 0xff, 0x3f,
    0xc0,

    /* U+003A ":" */
    0xf0, 0xf0,

    /* U+003B ";" */
    0xf0, 0xf4,

    /* U+003C "<" */
    0x1f, 0xf3, 0x7, 0xc1, 0xe0,

    /* U+003D "=" */
    0xff, 0xc1, 0xff, 0x80,

    /* U+003E ">" */
    0xe1, 0xf0, 0xdf, 0xe0,

    /* U+003F "?" */
    0xff, 0xff, 0x3, 0x3, 0x3, 0x3, 0xe, 0x1c,
    0x18, 0x10, 0x0, 0x18, 0x18,

    /* U+0040 "@" */
    0x7f, 0xbf, 0xfc, 0xff, 0x7f, 0xd8, 0xf6, 0x3d,
    0x8f, 0x7f, 0xcf, 0xb0, 0xf, 0xf9, 0xfe,

    /* U+0041 "A" */
    0x6, 0x0, 0xf0, 0x1f, 0x1, 0xb8, 0x19, 0x83,
    0x98, 0x31, 0xc7, 0xcc, 0x7e, 0xe6, 0x6, 0xc0,
    0x7c, 0x3,

    /* U+0042 "B" */
    0xff, 0xbf, 0xfc, 0xf, 0x3, 0xc0, 0xf3, 0xfc,
    0xff, 0x3, 0xc0, 0xf0, 0x3f, 0xff, 0xfe,

    /* U+0043 "C" */
    0x3f, 0xdf, 0xec, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0x7, 0xfc, 0xfe,

    /* U+0044 "D" */
    0xff, 0x3f, 0xec, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3f, 0xfb, 0xfc,

    /* U+0045 "E" */
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x7, 0xff, 0xff,
    0x80, 0xc0, 0x60, 0x3f, 0xef, 0xf0,

    /* U+0046 "F" */
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x7, 0xff, 0xff,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0x0,

    /* U+0047 "G" */
    0x3f, 0xef, 0xff, 0x0, 0x60, 0xc, 0x1, 0x9f,
    0xf3, 0xfe, 0x3, 0xc0, 0x78, 0xd, 0xff, 0x9f,
    0xe0,

    /* U+0048 "H" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xff, 0xff,
    0xff, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3,

    /* U+0049 "I" */
    0xff, 0xff, 0xff,

    /* U+004A "J" */
    0x1f, 0x8f, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0x3, 0x1, 0x80, 0xdf, 0xcf, 0xe0,

    /* U+004B "K" */
    0xc1, 0xb0, 0xec, 0x33, 0x1c, 0xc6, 0x3f, 0xf,
    0xe3, 0x18, 0xc7, 0x30, 0xcc, 0x3b, 0x7,

    /* U+004C "L" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x1f, 0xef, 0xf0,

    /* U+004D "M" */
    0xf0, 0x3f, 0xc0, 0xff, 0x87, 0xfe, 0x1f, 0xd8,
    0x6f, 0x73, 0xbc, 0xcc, 0xf3, 0xf3, 0xcf, 0x8f,
    0x1e, 0x3c, 0x30, 0xf0, 0x3,

    /* U+004E "N" */
    0xf0, 0x7e, 0xf, 0xe1, 0xfe, 0x3d, 0xc7, 0x9c,
    0xf3, 0x9e, 0x3b, 0xc7, 0xf8, 0x7f, 0x7, 0xe0,
    0xf0,

    /* U+004F "O" */
    0x3f, 0x8f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xd, 0xff, 0x1f,
    0xe0,

    /* U+0050 "P" */
    0xff, 0xbf, 0xf0, 0xc, 0x3, 0x0, 0xff, 0xff,
    0xfb, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,

    /* U+0051 "Q" */
    0x3f, 0x83, 0xfe, 0x30, 0x19, 0x80, 0xcc, 0x6,
    0x60, 0x33, 0x1, 0x98, 0xc, 0xc0, 0x66, 0x3,
    0x1f, 0xfe, 0x7f, 0xf0,

    /* U+0052 "R" */
    0xff, 0xbf, 0xf0, 0xc, 0x3, 0x0, 0xff, 0xff,
    0xfb, 0xc, 0xc3, 0xb0, 0x6c, 0x1f, 0x3,

    /* U+0053 "S" */
    0x7f, 0xff, 0xf0, 0x18, 0xc, 0x7, 0xf9, 0xfe,
    0x3, 0x1, 0x80, 0xff, 0xff, 0xe0,

    /* U+0054 "T" */
    0xff, 0xff, 0xfc, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6,
    0x0,

    /* U+0055 "U" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xd, 0xff, 0x3f,
    0xc0,

    /* U+0056 "V" */
    0xc0, 0x7e, 0x7, 0x60, 0x66, 0xe, 0x30, 0xc3,
    0x1c, 0x39, 0x81, 0x98, 0x1f, 0x80, 0xf0, 0xf,
    0x0, 0x60,

    /* U+0057 "W" */
    0xc0, 0xe0, 0xf8, 0x38, 0x36, 0x1e, 0x1d, 0x87,
    0x86, 0x71, 0xf1, 0x8c, 0xec, 0xe3, 0x33, 0x30,
    0xec, 0xec, 0x1f, 0x1f, 0x7, 0x87, 0x81, 0xe1,
    0xe0, 0x30, 0x30,

    /* U+0058 "X" */
    0xe0, 0xee, 0x18, 0xe7, 0xd, 0xc1, 0xf0, 0x1c,
    0x3, 0xc0, 0xf8, 0x3b, 0x8e, 0x39, 0x83, 0x70,
    0x70,

    /* U+0059 "Y" */
    0x60, 0x77, 0x6, 0x30, 0xc3, 0x9c, 0x19, 0x81,
    0xf8, 0xf, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60,

    /* U+005A "Z" */
    0xff, 0xff, 0xf0, 0xc, 0x7, 0x7, 0x83, 0xc3,
    0xc1, 0xe0, 0xe0, 0x30, 0xf, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xff,

    /* U+005C "\\" */
    0x41, 0x81, 0x83, 0x2, 0x6, 0x4, 0xc, 0x18,
    0x10, 0x30, 0x20, 0x60,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xff,

    /* U+005E "^" */
    0x38, 0xe2, 0x9b, 0x4f, 0x10,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0x59, 0xb0,

    /* U+0061 "a" */
    0x6, 0x0, 0xf0, 0x1f, 0x1, 0xb8, 0x19, 0x83,
    0x98, 0x31, 0xc7, 0xcc, 0x7e, 0xe6, 0x6, 0xc0,
    0x7c, 0x3,

    /* U+0062 "b" */
    0xff, 0xbf, 0xfc, 0xf, 0x3, 0xc0, 0xf3, 0xfc,
    0xff, 0x3, 0xc0, 0xf0, 0x3f, 0xff, 0xfe,

    /* U+0063 "c" */
    0x3f, 0xdf, 0xec, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0x7, 0xfc, 0xfe,

    /* U+0064 "d" */
    0xff, 0x3f, 0xec, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3f, 0xfb, 0xfc,

    /* U+0065 "e" */
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x7, 0xff, 0xff,
    0x80, 0xc0, 0x60, 0x3f, 0xef, 0xf0,

    /* U+0066 "f" */
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x7, 0xff, 0xff,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0x0,

    /* U+0067 "g" */
    0x3f, 0xef, 0xff, 0x0, 0x60, 0xc, 0x1, 0x9f,
    0xf3, 0xfe, 0x3, 0xc0, 0x78, 0xd, 0xff, 0x9f,
    0xe0,

    /* U+0068 "h" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xff, 0xff,
    0xff, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3,

    /* U+0069 "i" */
    0xff, 0xff, 0xff,

    /* U+006A "j" */
    0x1f, 0x8f, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0x3, 0x1, 0x80, 0xdf, 0xcf, 0xe0,

    /* U+006B "k" */
    0xc1, 0xb0, 0xec, 0x33, 0x1c, 0xc6, 0x3f, 0xf,
    0xe3, 0x18, 0xc7, 0x30, 0xcc, 0x3b, 0x7,

    /* U+006C "l" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x1f, 0xef, 0xf0,

    /* U+006D "m" */
    0xf0, 0x3f, 0xc0, 0xff, 0x87, 0xfe, 0x1f, 0xd8,
    0x6f, 0x73, 0xbc, 0xcc, 0xf3, 0xf3, 0xcf, 0x8f,
    0x1e, 0x3c, 0x30, 0xf0, 0x3,

    /* U+006E "n" */
    0xf0, 0x7e, 0xf, 0xe1, 0xfe, 0x3d, 0xc7, 0x9c,
    0xf3, 0x9e, 0x3b, 0xc7, 0xf8, 0x7f, 0x7, 0xe0,
    0xf0,

    /* U+006F "o" */
    0x3f, 0x8f, 0xfb, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xd, 0xff, 0x1f,
    0xe0,

    /* U+0070 "p" */
    0xff, 0xbf, 0xf0, 0xc, 0x3, 0x0, 0xff, 0xff,
    0xfb, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,

    /* U+0071 "q" */
    0x3f, 0x83, 0xfe, 0x30, 0x19, 0x80, 0xcc, 0x6,
    0x60, 0x33, 0x1, 0x98, 0xc, 0xc0, 0x66, 0x3,
    0x1f, 0xfe, 0x7f, 0xf0,

    /* U+0072 "r" */
    0xff, 0xbf, 0xf0, 0xc, 0x3, 0x0, 0xff, 0xff,
    0xfb, 0xc, 0xc3, 0xb0, 0x6c, 0x1f, 0x3,

    /* U+0073 "s" */
    0x7f, 0xff, 0xf0, 0x18, 0xc, 0x7, 0xf9, 0xfe,
    0x3, 0x1, 0x80, 0xff, 0xff, 0xe0,

    /* U+0074 "t" */
    0xff, 0xff, 0xfc, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6,
    0x0,

    /* U+0075 "u" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xd, 0xff, 0x3f,
    0xc0,

    /* U+0076 "v" */
    0xc0, 0x3e, 0x7, 0x60, 0x66, 0xe, 0x30, 0xc3,
    0x1c, 0x39, 0xc1, 0x98, 0x1f, 0x80, 0xf0, 0xf,
    0x0, 0x60,

    /* U+0077 "w" */
    0xc0, 0xe0, 0xf8, 0x38, 0x36, 0x1e, 0x1d, 0x87,
    0x86, 0x71, 0xf1, 0x8c, 0xec, 0xe3, 0x33, 0x30,
    0xec, 0xec, 0x1f, 0x1f, 0x7, 0x87, 0x81, 0xe1,
    0xe0, 0x30, 0x30,

    /* U+0078 "x" */
    0xe0, 0xee, 0x18, 0xe7, 0xd, 0xc1, 0xf0, 0x1c,
    0x3, 0xc0, 0xf8, 0x3b, 0x8e, 0x39, 0x83, 0x70,
    0x70,

    /* U+0079 "y" */
    0x60, 0x67, 0x6, 0x30, 0xc3, 0x9c, 0x19, 0x81,
    0xf8, 0xf, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60,

    /* U+007A "z" */
    0xff, 0xff, 0xf0, 0xc, 0x7, 0x7, 0x83, 0xc3,
    0xc1, 0xe0, 0xe0, 0x30, 0xf, 0xff, 0xff,

    /* U+007B "{" */
    0xc, 0x73, 0x8c, 0x30, 0xc3, 0x3c, 0x70, 0xc3,
    0xc, 0x30, 0xe1, 0xc3,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xe3, 0xc3, 0x86, 0x18, 0x61, 0x87, 0x1c, 0x61,
    0x86, 0x18, 0xef, 0x38,

    /* U+007E "~" */
    0xf3, 0xfe, 0x78
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 135, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 87, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 137, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 7, .adv_w = 214, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 21, .adv_w = 204, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 39, .adv_w = 230, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 234, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 85, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 76, .adv_w = 117, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 84, .adv_w = 117, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 94, .adv_w = 111, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 99, .adv_w = 101, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 103, .adv_w = 49, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 104, .adv_w = 100, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 106, .adv_w = 49, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 199, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 68, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 194, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 189, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 203, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 194, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 196, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 184, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 204, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 193, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 87, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 283, .adv_w = 85, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 285, .adv_w = 150, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 290, .adv_w = 136, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 294, .adv_w = 150, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 298, .adv_w = 171, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 210, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 187, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 184, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 166, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 184, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 163, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 184, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 55, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 452, .adv_w = 156, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 170, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 157, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 495, .adv_w = 240, .box_w = 14, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 196, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 191, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 565, .adv_w = 217, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 168, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 614, .adv_w = 182, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 187, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 648, .adv_w = 188, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 666, .adv_w = 286, .box_w = 18, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 179, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 183, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 728, .adv_w = 172, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 743, .adv_w = 102, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 751, .adv_w = 154, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 763, .adv_w = 102, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 771, .adv_w = 110, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 776, .adv_w = 184, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 778, .adv_w = 101, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 780, .adv_w = 187, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 798, .adv_w = 184, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 166, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 184, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 843, .adv_w = 163, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 857, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 871, .adv_w = 184, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 888, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 903, .adv_w = 55, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 906, .adv_w = 156, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 170, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 157, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 949, .adv_w = 240, .box_w = 14, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 970, .adv_w = 196, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 987, .adv_w = 191, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1004, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 217, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1039, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1054, .adv_w = 168, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1068, .adv_w = 182, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1085, .adv_w = 187, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1102, .adv_w = 188, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1120, .adv_w = 286, .box_w = 18, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1147, .adv_w = 179, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1164, .adv_w = 183, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1182, .adv_w = 172, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1197, .adv_w = 142, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1209, .adv_w = 74, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1213, .adv_w = 142, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1225, .adv_w = 161, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 5}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    34, 53,
    34, 55,
    34, 56,
    34, 58,
    34, 85,
    34, 87,
    34, 88,
    34, 90,
    36, 55,
    36, 56,
    36, 87,
    36, 88,
    38, 55,
    38, 56,
    38, 87,
    38, 88,
    39, 43,
    39, 75,
    43, 43,
    43, 75,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    45, 85,
    45, 87,
    45, 88,
    45, 90,
    49, 34,
    49, 43,
    49, 66,
    49, 75,
    50, 53,
    50, 55,
    50, 58,
    50, 85,
    50, 87,
    50, 90,
    53, 34,
    53, 43,
    53, 66,
    53, 75,
    54, 43,
    54, 75,
    55, 34,
    55, 38,
    55, 43,
    55, 45,
    55, 70,
    55, 75,
    55, 77,
    56, 34,
    56, 38,
    56, 43,
    56, 45,
    56, 70,
    56, 75,
    56, 77,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 66,
    58, 68,
    58, 72,
    58, 75,
    58, 80,
    58, 82,
    66, 85,
    66, 87,
    66, 88,
    66, 90,
    68, 55,
    68, 56,
    68, 87,
    68, 88,
    70, 55,
    70, 56,
    70, 87,
    70, 88,
    71, 43,
    71, 75,
    75, 43,
    75, 75,
    77, 55,
    77, 56,
    77, 85,
    77, 87,
    77, 88,
    77, 90,
    81, 66,
    81, 75,
    82, 85,
    82, 87,
    82, 90,
    85, 66,
    85, 75,
    86, 43,
    86, 75,
    87, 38,
    87, 43,
    87, 45,
    87, 66,
    87, 70,
    87, 75,
    87, 77,
    88, 38,
    88, 43,
    88, 45,
    88, 66,
    88, 70,
    88, 75,
    88, 77,
    90, 36,
    90, 40,
    90, 48,
    90, 50,
    90, 66,
    90, 68,
    90, 72,
    90, 75,
    90, 80,
    90, 82
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -34, -34, -34, -34, -34, -34, -34, -34,
    11, 11, 11, 11, 27, 27, 27, 27,
    -27, -27, -6, -6, -38, -33, -33, -34,
    -34, -34, -34, -34, -24, -24, -24, -24,
    -24, -24, -24, -24, -24, -24, -34, -24,
    -34, -24, -6, -6, -34, 16, -24, 16,
    16, -27, 16, -34, 16, -27, 16, 16,
    -27, 16, -34, -11, -11, -24, -11, -11,
    -34, -11, -11, -34, -11, -11, -34, -34,
    -34, -34, 11, 11, 11, 11, 27, 27,
    27, 27, -27, -27, -6, -6, -33, -33,
    -34, -34, -34, -34, -24, -24, -24, -24,
    -24, -34, -24, -6, -6, 16, -27, 16,
    -34, 16, -24, 16, 16, -27, 16, -34,
    16, -27, 16, -11, -11, -11, -11, -34,
    -11, -11, -34, -11, -11
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 125,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_MOKO18 = {
#else
lv_font_t ui_font_MOKO18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_MOKO18*/
