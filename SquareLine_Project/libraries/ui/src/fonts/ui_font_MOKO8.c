/*******************************************************************************
 * Size: 8 px
 * Bpp: 1
 * Opts: --bpp 1 --size 8 --font C:\Users\Lenovo\Downloads\e_square\assets\Mokoto-Demo.ttf -o C:\Users\Lenovo\Downloads\e_square\assets\ui_font_MOKO8.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_MOKO8
#define UI_FONT_MOKO8 1
#endif

#if UI_FONT_MOKO8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xf4,

    /* U+0022 "\"" */
    0xd0,

    /* U+0023 "#" */
    0x57, 0xd5, 0xf5, 0x0,

    /* U+0024 "$" */
    0x2f, 0xaf, 0x33, 0xf2,

    /* U+0025 "%" */
    0x6, 0xb5, 0xa3, 0x9d, 0x60,

    /* U+0026 "&" */
    0x66, 0x99, 0xe9, 0x74,

    /* U+0027 "'" */
    0x80,

    /* U+0028 "(" */
    0x6a, 0xa9,

    /* U+0029 ")" */
    0x95, 0x56,

    /* U+002A "*" */
    0x5f, 0x80,

    /* U+002B "+" */
    0xe8,

    /* U+002C "," */
    0x80,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x16, 0xa8,

    /* U+0030 "0" */
    0xfe, 0x6b, 0x59, 0xfc,

    /* U+0031 "1" */
    0xd5, 0x50,

    /* U+0032 "2" */
    0x78, 0x7f, 0x8, 0x7c,

    /* U+0033 "3" */
    0xf8, 0x7e, 0x10, 0xfc,

    /* U+0034 "4" */
    0x18, 0xa6, 0x92, 0x7c, 0x20,

    /* U+0035 "5" */
    0xfc, 0x3e, 0x10, 0xfc,

    /* U+0036 "6" */
    0xfc, 0x2f, 0x18, 0xfc,

    /* U+0037 "7" */
    0xf8, 0x44, 0x66, 0x20,

    /* U+0038 "8" */
    0xfc, 0x7f, 0x18, 0xfc,

    /* U+0039 "9" */
    0xfc, 0x63, 0xd0, 0xfc,

    /* U+003A ":" */
    0xa0,

    /* U+003B ";" */
    0xa0,

    /* U+003C "<" */
    0xe4,

    /* U+003D "=" */
    0xcc,

    /* U+003E ">" */
    0xd8,

    /* U+003F "?" */
    0xe4, 0xa0, 0x80,

    /* U+0040 "@" */
    0xfd, 0xf3, 0x78, 0x78,

    /* U+0041 "A" */
    0x23, 0x94, 0xae, 0xc4,

    /* U+0042 "B" */
    0xfc, 0x6f, 0x18, 0xfc,

    /* U+0043 "C" */
    0xf8, 0x88, 0x8f,

    /* U+0044 "D" */
    0xf4, 0x63, 0x18, 0xf8,

    /* U+0045 "E" */
    0xf0, 0xf8, 0x8f,

    /* U+0046 "F" */
    0xf0, 0xf8, 0x88,

    /* U+0047 "G" */
    0xfc, 0x2f, 0x18, 0xfc,

    /* U+0048 "H" */
    0x8c, 0x7f, 0x18, 0xc4,

    /* U+0049 "I" */
    0xfc,

    /* U+004A "J" */
    0x71, 0x11, 0x1f,

    /* U+004B "K" */
    0x9a, 0xea, 0x99,

    /* U+004C "L" */
    0x88, 0x88, 0x8f,

    /* U+004D "M" */
    0xcf, 0x3c, 0xed, 0xb6, 0x10,

    /* U+004E "N" */
    0xce, 0x6b, 0x59, 0xcc,

    /* U+004F "O" */
    0xfc, 0x63, 0x18, 0xfc,

    /* U+0050 "P" */
    0xf0, 0x7d, 0x8, 0x40,

    /* U+0051 "Q" */
    0xfa, 0x28, 0xa2, 0x8b, 0xf0,

    /* U+0052 "R" */
    0xf0, 0xbd, 0x49, 0x4c,

    /* U+0053 "S" */
    0xf8, 0xf1, 0x1f,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xfc,

    /* U+0056 "V" */
    0x8c, 0x56, 0xa7, 0x10,

    /* U+0057 "W" */
    0x99, 0x99, 0x5b, 0x56, 0x66, 0x26,

    /* U+0058 "X" */
    0xca, 0x88, 0xe5, 0x44,

    /* U+0059 "Y" */
    0x8a, 0x94, 0x42, 0x10,

    /* U+005A "Z" */
    0xf1, 0x24, 0x8f,

    /* U+005B "[" */
    0xea, 0xab,

    /* U+005C "\\" */
    0x2a, 0x54,

    /* U+005D "]" */
    0xd5, 0x57,

    /* U+005E "^" */
    0x5a, 0x80,

    /* U+005F "_" */
    0xe0,

    /* U+0060 "`" */
    0x40,

    /* U+0061 "a" */
    0x23, 0x94, 0xae, 0xc4,

    /* U+0062 "b" */
    0xfc, 0x6f, 0x18, 0xfc,

    /* U+0063 "c" */
    0xf8, 0x88, 0x8f,

    /* U+0064 "d" */
    0xf4, 0x63, 0x18, 0xf8,

    /* U+0065 "e" */
    0xf0, 0xf8, 0x8f,

    /* U+0066 "f" */
    0xf0, 0xf8, 0x88,

    /* U+0067 "g" */
    0xfc, 0x2f, 0x18, 0xfc,

    /* U+0068 "h" */
    0x8c, 0x7f, 0x18, 0xc4,

    /* U+0069 "i" */
    0xfc,

    /* U+006A "j" */
    0x71, 0x11, 0x1f,

    /* U+006B "k" */
    0x9a, 0xea, 0x99,

    /* U+006C "l" */
    0x88, 0x88, 0x8f,

    /* U+006D "m" */
    0xcf, 0x3c, 0xed, 0xb6, 0x10,

    /* U+006E "n" */
    0xce, 0x6b, 0x59, 0xcc,

    /* U+006F "o" */
    0xfc, 0x63, 0x18, 0xfc,

    /* U+0070 "p" */
    0xf0, 0x7d, 0x8, 0x40,

    /* U+0071 "q" */
    0xfa, 0x28, 0xa2, 0x8b, 0xf0,

    /* U+0072 "r" */
    0xf0, 0xbd, 0x49, 0x4c,

    /* U+0073 "s" */
    0xf8, 0xf1, 0x1f,

    /* U+0074 "t" */
    0xf9, 0x8, 0x42, 0x10,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xfc,

    /* U+0076 "v" */
    0x8c, 0x56, 0xa7, 0x10,

    /* U+0077 "w" */
    0x99, 0x99, 0x5b, 0x56, 0x66, 0x26,

    /* U+0078 "x" */
    0xca, 0x88, 0xe5, 0x44,

    /* U+0079 "y" */
    0x8a, 0x94, 0x42, 0x10,

    /* U+007A "z" */
    0xf1, 0x24, 0x8f,

    /* U+007B "{" */
    0x69, 0x64, 0x91,

    /* U+007C "|" */
    0xff,

    /* U+007D "}" */
    0xc9, 0x34, 0x94,

    /* U+007E "~" */
    0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 60, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 39, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 61, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3, .adv_w = 95, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 7, .adv_w = 91, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 11, .adv_w = 102, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 38, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 21, .adv_w = 52, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 23, .adv_w = 52, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 25, .adv_w = 49, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 27, .adv_w = 45, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 28, .adv_w = 22, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 29, .adv_w = 44, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 30, .adv_w = 22, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 69, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 88, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 30, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 86, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 90, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 86, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 91, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 86, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 39, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 73, .adv_w = 38, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 67, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 75, .adv_w = 60, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 76, .adv_w = 67, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 77, .adv_w = 76, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 93, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 83, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 74, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 73, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 74, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 24, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 69, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 75, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 70, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 75, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 83, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 127, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 45, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 183, .adv_w = 69, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 45, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 187, .adv_w = 49, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 189, .adv_w = 82, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 190, .adv_w = 45, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 191, .adv_w = 83, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 74, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 73, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 74, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 24, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 69, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 75, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 70, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 107, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 75, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 83, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 127, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 63, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 291, .adv_w = 33, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 292, .adv_w = 63, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 295, .adv_w = 71, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 2}
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
    -15, -15, -15, -15, -15, -15, -15, -15,
    5, 5, 5, 5, 12, 12, 12, 12,
    -12, -12, -2, -2, -17, -15, -15, -15,
    -15, -15, -15, -15, -11, -11, -11, -11,
    -11, -11, -11, -11, -11, -11, -15, -11,
    -15, -11, -2, -2, -15, 7, -11, 7,
    7, -12, 7, -15, 7, -12, 7, 7,
    -12, 7, -15, -5, -5, -11, -5, -5,
    -15, -5, -5, -15, -5, -5, -15, -15,
    -15, -15, 5, 5, 5, 5, 12, 12,
    12, 12, -12, -12, -2, -2, -15, -15,
    -15, -15, -15, -15, -11, -11, -11, -11,
    -11, -15, -11, -2, -2, 7, -12, 7,
    -15, 7, -11, 7, 7, -12, 7, -15,
    7, -12, 7, -5, -5, -5, -5, -15,
    -5, -5, -15, -5, -5
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
const lv_font_t ui_font_MOKO8 = {
#else
lv_font_t ui_font_MOKO8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 9,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_MOKO8*/

