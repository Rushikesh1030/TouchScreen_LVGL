/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --font C:\Users\Lenovo\Downloads\e_square\assets\Mokoto-Demo.ttf -o C:\Users\Lenovo\Downloads\e_square\assets\ui_font_Font1.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FONT1
#define UI_FONT_FONT1 1
#endif

#if UI_FONT_FONT1

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfd,

    /* U+0022 "\"" */
    0xa0,

    /* U+0023 "#" */
    0x28, 0x53, 0xf9, 0x4f, 0xe5, 0xa, 0x0,

    /* U+0024 "$" */
    0x13, 0xf9, 0x24, 0xfc, 0x51, 0x45, 0xfc, 0x40,

    /* U+0025 "%" */
    0x0, 0xe8, 0xa8, 0xf8, 0x10, 0x1f, 0x29, 0x29,
    0x6f,

    /* U+0026 "&" */
    0x78, 0xb1, 0x63, 0x8f, 0x73, 0xa7, 0x7b,

    /* U+0027 "'" */
    0x80,

    /* U+0028 "(" */
    0x72, 0x49, 0x24, 0x91, 0x80,

    /* U+0029 ")" */
    0xc4, 0x92, 0x49, 0x27, 0x0,

    /* U+002A "*" */
    0x2f, 0x7d,

    /* U+002B "+" */
    0x4f, 0x40,

    /* U+002C "," */
    0x80,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x11, 0x22, 0x64, 0x48, 0x80,

    /* U+0030 "0" */
    0x7d, 0x46, 0xcd, 0x99, 0xb3, 0x62, 0xbe,

    /* U+0031 "1" */
    0xd5, 0x55,

    /* U+0032 "2" */
    0x7e, 0x4, 0xf, 0xf8, 0x10, 0x20, 0x7f,

    /* U+0033 "3" */
    0xfe, 0x4, 0xf, 0xf0, 0x20, 0x40, 0xff,

    /* U+0034 "4" */
    0x6, 0x1a, 0x32, 0x62, 0xc2, 0x7f, 0x2, 0x2,

    /* U+0035 "5" */
    0xfc, 0x80, 0x80, 0xfe, 0x2, 0x3, 0x2, 0xfe,

    /* U+0036 "6" */
    0x7e, 0x80, 0x80, 0xbe, 0x82, 0x83, 0x82, 0x7e,

    /* U+0037 "7" */
    0xfe, 0xc, 0x38, 0x61, 0x86, 0x18, 0x30,

    /* U+0038 "8" */
    0xff, 0x81, 0x81, 0xff, 0x81, 0x81, 0x81, 0xff,

    /* U+0039 "9" */
    0xfd, 0x6, 0xf, 0xd0, 0x20, 0x40, 0xbe,

    /* U+003A ":" */
    0x90,

    /* U+003B ";" */
    0x98,

    /* U+003C "<" */
    0x17, 0xc3,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003E ">" */
    0x8f, 0x3c,

    /* U+003F "?" */
    0xf8, 0x42, 0x13, 0x10, 0x4,

    /* U+0040 "@" */
    0xfd, 0x6, 0xfd, 0x1a, 0x37, 0xe0, 0x3e,

    /* U+0041 "A" */
    0x18, 0x38, 0x3c, 0x24, 0x66, 0x76, 0xc2, 0x83,

    /* U+0042 "B" */
    0xff, 0x6, 0xd, 0xf8, 0x30, 0x60, 0xff,

    /* U+0043 "C" */
    0x7f, 0x2, 0x4, 0x8, 0x10, 0x20, 0x3f,

    /* U+0044 "D" */
    0xfd, 0x6, 0xc, 0x18, 0x30, 0x60, 0xfe,

    /* U+0045 "E" */
    0xfc, 0x0, 0x3f, 0x82, 0x8, 0x1f,

    /* U+0046 "F" */
    0xfc, 0x0, 0x3f, 0x82, 0x8, 0x20,

    /* U+0047 "G" */
    0x7f, 0x2, 0x4, 0xf8, 0x30, 0x60, 0xbf,

    /* U+0048 "H" */
    0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,

    /* U+0049 "I" */
    0xff,

    /* U+004A "J" */
    0x78, 0x42, 0x10, 0x84, 0x3f,

    /* U+004B "K" */
    0x8e, 0x69, 0x3c, 0x92, 0x68, 0xa3,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x1f,

    /* U+004D "M" */
    0xe3, 0xf1, 0xf8, 0xf6, 0xdb, 0x6c, 0xe6, 0x73,
    0x1,

    /* U+004E "N" */
    0xe3, 0xc7, 0xcd, 0x99, 0xb3, 0xe3, 0xc7,

    /* U+004F "O" */
    0x7d, 0x6, 0xc, 0x18, 0x30, 0x60, 0xbe,

    /* U+0050 "P" */
    0xfc, 0xc, 0x1f, 0xe8, 0x10, 0x20, 0x40,

    /* U+0051 "Q" */
    0x7c, 0x41, 0x20, 0x90, 0x48, 0x24, 0x12, 0x8,
    0xff,

    /* U+0052 "R" */
    0xfc, 0xc, 0x1f, 0xf8, 0xd1, 0xa1, 0xc3,

    /* U+0053 "S" */
    0xfe, 0x8, 0x3e, 0x4, 0x10, 0x7f,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xbe,

    /* U+0056 "V" */
    0xc3, 0xc2, 0x46, 0x66, 0x24, 0x3c, 0x38, 0x18,

    /* U+0057 "W" */
    0xc6, 0x1c, 0x63, 0x47, 0x36, 0xf2, 0x69, 0x62,
    0x9e, 0x39, 0xc3, 0xc,

    /* U+0058 "X" */
    0xc6, 0xc8, 0xf0, 0xc3, 0x85, 0x99, 0xe3,

    /* U+0059 "Y" */
    0xc6, 0x89, 0xb1, 0x43, 0x82, 0x4, 0x8,

    /* U+005A "Z" */
    0xfc, 0x10, 0xce, 0x73, 0x8, 0x3f,

    /* U+005B "[" */
    0xea, 0xaa, 0xac,

    /* U+005C "\\" */
    0x88, 0xc4, 0x42, 0x21, 0x10,

    /* U+005D "]" */
    0xd5, 0x55, 0x5c,

    /* U+005E "^" */
    0x66, 0x59,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x18, 0x38, 0x3c, 0x24, 0x66, 0x76, 0xc2, 0x83,

    /* U+0062 "b" */
    0xff, 0x6, 0xd, 0xf8, 0x30, 0x60, 0xff,

    /* U+0063 "c" */
    0x7f, 0x2, 0x4, 0x8, 0x10, 0x20, 0x3f,

    /* U+0064 "d" */
    0xfd, 0x6, 0xc, 0x18, 0x30, 0x60, 0xfe,

    /* U+0065 "e" */
    0xfc, 0x0, 0x3f, 0x82, 0x8, 0x1f,

    /* U+0066 "f" */
    0xfc, 0x0, 0x3f, 0x82, 0x8, 0x20,

    /* U+0067 "g" */
    0x7f, 0x2, 0x4, 0xf8, 0x30, 0x60, 0xbf,

    /* U+0068 "h" */
    0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,

    /* U+0069 "i" */
    0xff,

    /* U+006A "j" */
    0x78, 0x42, 0x10, 0x84, 0x3f,

    /* U+006B "k" */
    0x8e, 0x69, 0x3c, 0x92, 0x68, 0xa3,

    /* U+006C "l" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x1f,

    /* U+006D "m" */
    0xe3, 0xf1, 0xf8, 0xf6, 0xdb, 0x6c, 0xe6, 0x73,
    0x1,

    /* U+006E "n" */
    0xe3, 0xc7, 0xcd, 0x99, 0xb3, 0xe3, 0xc7,

    /* U+006F "o" */
    0x7d, 0x6, 0xc, 0x18, 0x30, 0x60, 0xbe,

    /* U+0070 "p" */
    0xfc, 0xc, 0x1f, 0xe8, 0x10, 0x20, 0x40,

    /* U+0071 "q" */
    0x7c, 0x41, 0x20, 0x90, 0x48, 0x24, 0x12, 0x8,
    0xff,

    /* U+0072 "r" */
    0xfc, 0xc, 0x1f, 0xf8, 0xd1, 0xa1, 0xc3,

    /* U+0073 "s" */
    0xfe, 0x8, 0x3e, 0x4, 0x10, 0x7f,

    /* U+0074 "t" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8,

    /* U+0075 "u" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xbe,

    /* U+0076 "v" */
    0xc3, 0xc3, 0x46, 0x66, 0x24, 0x3c, 0x38, 0x18,

    /* U+0077 "w" */
    0xc6, 0x1c, 0x63, 0x47, 0x36, 0xf2, 0x69, 0x62,
    0x9e, 0x39, 0xc3, 0xc,

    /* U+0078 "x" */
    0xc6, 0xc8, 0xf0, 0xc3, 0x85, 0x99, 0xe3,

    /* U+0079 "y" */
    0xc6, 0x89, 0xb1, 0x43, 0x82, 0x4, 0x8,

    /* U+007A "z" */
    0xfc, 0x10, 0xce, 0x73, 0x8, 0x3f,

    /* U+007B "{" */
    0x34, 0x44, 0x4c, 0x44, 0x44, 0x30,

    /* U+007C "|" */
    0xff, 0xc0,

    /* U+007D "}" */
    0xc2, 0x22, 0x23, 0x22, 0x22, 0xc0,

    /* U+007E "~" */
    0xcd, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 90, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 58, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 91, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3, .adv_w = 143, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 10, .adv_w = 136, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 18, .adv_w = 153, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 156, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 56, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 35, .adv_w = 78, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 40, .adv_w = 78, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 45, .adv_w = 74, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 47, .adv_w = 67, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 49, .adv_w = 32, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 50, .adv_w = 67, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 51, .adv_w = 32, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 103, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 133, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 45, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 129, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 129, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 131, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 123, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 129, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 58, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 127, .adv_w = 56, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 128, .adv_w = 100, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 130, .adv_w = 91, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 132, .adv_w = 100, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 134, .adv_w = 114, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 140, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 125, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 123, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 111, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 123, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 36, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 160, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 131, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 145, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 125, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 190, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 68, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 328, .adv_w = 103, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 68, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 336, .adv_w = 73, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 338, .adv_w = 123, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 339, .adv_w = 67, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 340, .adv_w = 125, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 348, .adv_w = 123, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 111, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 123, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 36, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 160, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 131, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 145, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 452, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 125, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 190, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 519, .adv_w = 95, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 525, .adv_w = 50, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 527, .adv_w = 95, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 533, .adv_w = 107, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 3}
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
    -22, -22, -22, -22, -22, -22, -22, -22,
    7, 7, 7, 7, 18, 18, 18, 18,
    -18, -18, -4, -4, -25, -22, -22, -22,
    -22, -22, -22, -22, -16, -16, -16, -16,
    -16, -16, -16, -16, -16, -16, -22, -16,
    -22, -16, -4, -4, -22, 11, -16, 11,
    11, -18, 11, -22, 11, -18, 11, 11,
    -18, 11, -22, -7, -7, -16, -7, -7,
    -22, -7, -7, -22, -7, -7, -22, -22,
    -22, -22, 7, 7, 7, 7, 18, 18,
    18, 18, -18, -18, -4, -4, -22, -22,
    -22, -22, -22, -22, -16, -16, -16, -16,
    -16, -22, -16, -4, -4, 11, -18, 11,
    -22, 11, -16, 11, 11, -18, 11, -22,
    11, -18, 11, -7, -7, -7, -7, -22,
    -7, -7, -22, -7, -7
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
const lv_font_t ui_font_Font1 = {
#else
lv_font_t ui_font_Font1 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONT1*/

