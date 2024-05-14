/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:\Users\Lenovo\Downloads\e_square\assets\Mokoto-Demo.ttf -o C:\Users\Lenovo\Downloads\e_square\assets\ui_font_MO16.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_MO16
#define UI_FONT_MO16 1
#endif

#if UI_FONT_MO16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0x3c,

    /* U+0022 "\"" */
    0xde, 0xd2,

    /* U+0023 "#" */
    0x36, 0x1b, 0x3f, 0xff, 0xf3, 0x61, 0xb3, 0xff,
    0xff, 0x36, 0x1b, 0x0,

    /* U+0024 "$" */
    0x18, 0xc, 0x1f, 0xff, 0xfd, 0x86, 0xc3, 0xfd,
    0xff, 0x19, 0x8c, 0xc6, 0x7f, 0xff, 0xf0, 0xc0,

    /* U+0025 "%" */
    0x1, 0x3c, 0xc9, 0x22, 0x58, 0xf6, 0x1, 0x0,
    0xc0, 0x2f, 0x1a, 0x46, 0x91, 0x24, 0xcf,

    /* U+0026 "&" */
    0x7e, 0x1f, 0x86, 0x61, 0x98, 0x7e, 0xf, 0x7,
    0xdb, 0x3c, 0xc7, 0x3f, 0xef, 0xcc,

    /* U+0027 "'" */
    0xf4,

    /* U+0028 "(" */
    0x77, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc7, 0x70,

    /* U+0029 ")" */
    0xee, 0x73, 0x33, 0x33, 0x33, 0x33, 0x7e, 0xe0,

    /* U+002A "*" */
    0x31, 0xef, 0xde, 0xcc,

    /* U+002B "+" */
    0x63, 0x3f, 0xf6, 0x0,

    /* U+002C "," */
    0xf4,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x4, 0x30, 0x86, 0x10, 0xc3, 0x8, 0x61, 0x4,
    0x30,

    /* U+0030 "0" */
    0x7f, 0xbf, 0xfd, 0x8f, 0x63, 0xcc, 0xf3, 0x3c,
    0xcf, 0x1b, 0xc6, 0xff, 0xf7, 0xf8,

    /* U+0031 "1" */
    0xfd, 0xb6, 0xdb, 0x6d, 0x80,

    /* U+0032 "2" */
    0x7f, 0x9f, 0xf0, 0xc, 0x3, 0x7f, 0xff, 0xec,
    0x3, 0x0, 0xc0, 0x3f, 0xff, 0xfc,

    /* U+0033 "3" */
    0xff, 0xbf, 0xf0, 0xc, 0x3, 0x7f, 0xdf, 0xf0,
    0xc, 0x3, 0x0, 0xff, 0xff, 0xf8,

    /* U+0034 "4" */
    0x1, 0xc0, 0x3c, 0xe, 0xc1, 0xcc, 0x38, 0xc7,
    0xc, 0xe0, 0xcf, 0xff, 0x7f, 0xf0, 0xc, 0x0,
    0xc0,

    /* U+0035 "5" */
    0xff, 0xbf, 0xec, 0x3, 0x0, 0xff, 0xbf, 0xf0,
    0xc, 0x3, 0x0, 0xff, 0xff, 0xf8,

    /* U+0036 "6" */
    0x7f, 0xbf, 0xec, 0x3, 0x0, 0xcf, 0xb3, 0xfc,
    0xf, 0x3, 0xc0, 0xff, 0xf7, 0xf8,

    /* U+0037 "7" */
    0xff, 0xff, 0xf0, 0xc, 0x6, 0x3, 0x81, 0xc0,
    0xe0, 0x70, 0x18, 0xc, 0x7, 0x0,

    /* U+0038 "8" */
    0x7f, 0xbf, 0xfc, 0xf, 0x3, 0xff, 0xff, 0xfc,
    0xf, 0x3, 0xc0, 0xff, 0xf7, 0xf8,

    /* U+0039 "9" */
    0x7f, 0xbf, 0xfc, 0xf, 0x3, 0xfc, 0xdf, 0x30,
    0xc, 0x3, 0x0, 0xdf, 0xf7, 0xf8,

    /* U+003A ":" */
    0xf0, 0xf0,

    /* U+003B ";" */
    0xf0, 0xf4,

    /* U+003C "<" */
    0x8, 0xee, 0x38, 0x38, 0x0,

    /* U+003D "=" */
    0xff, 0xc1, 0xff, 0x80,

    /* U+003E ">" */
    0x83, 0xc1, 0x8e, 0xf2, 0x0,

    /* U+003F "?" */
    0xff, 0xfc, 0x18, 0x30, 0x61, 0xcf, 0x18, 0x30,
    0x0, 0xc1, 0x80,

    /* U+0040 "@" */
    0x7f, 0x7f, 0xf7, 0xff, 0xff, 0x1f, 0x8f, 0xff,
    0xbe, 0xc0, 0x7f, 0x9f, 0xc0,

    /* U+0041 "A" */
    0xc, 0x3, 0xc0, 0x78, 0xd, 0x83, 0x30, 0x67,
    0x1c, 0x63, 0xec, 0x7c, 0xd8, 0x1b, 0x3, 0x80,

    /* U+0042 "B" */
    0xff, 0x7f, 0xf0, 0x78, 0x3d, 0xfe, 0xff, 0x7,
    0x83, 0xc1, 0xff, 0xff, 0xc0,

    /* U+0043 "C" */
    0x7f, 0xff, 0xb0, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x7f, 0xdf, 0xc0,

    /* U+0044 "D" */
    0xff, 0x7f, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xff, 0xbf, 0xc0,

    /* U+0045 "E" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0xc0, 0xc0,
    0xc0, 0xff, 0x7f,

    /* U+0046 "F" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0,

    /* U+0047 "G" */
    0x7f, 0xff, 0xf0, 0x18, 0xc, 0xfe, 0x7f, 0x7,
    0x83, 0xc1, 0xff, 0xdf, 0xe0,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3f, 0xff, 0xff, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x60,

    /* U+0049 "I" */
    0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x3f, 0x3f, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x3, 0xff, 0xfe,

    /* U+004B "K" */
    0xc3, 0x61, 0xb1, 0x99, 0xcf, 0xc7, 0xe3, 0x39,
    0x8c, 0xc7, 0x61, 0xb0, 0xe0,

    /* U+004C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xff, 0x7f,

    /* U+004D "M" */
    0xe0, 0x7f, 0xf, 0xf0, 0xff, 0x9b, 0xd9, 0xbd,
    0x9b, 0xcf, 0x3c, 0xf3, 0xc6, 0x3c, 0x3, 0xc0,
    0x30,

    /* U+004E "N" */
    0xe0, 0xfc, 0x3f, 0x8f, 0x63, 0xdc, 0xf3, 0x3c,
    0xef, 0x1b, 0xc7, 0xf0, 0xfc, 0x1c,

    /* U+004F "O" */
    0x7f, 0xbf, 0xfc, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xff, 0xf7, 0xf8,

    /* U+0050 "P" */
    0xff, 0x7f, 0xc0, 0x60, 0x3f, 0xff, 0xfb, 0x1,
    0x80, 0xc0, 0x60, 0x30, 0x0,

    /* U+0051 "Q" */
    0x7f, 0x8f, 0xfc, 0xc0, 0xcc, 0xc, 0xc0, 0xcc,
    0xc, 0xc0, 0xcc, 0xc, 0xc0, 0xcf, 0xff, 0x7f,
    0xe0,

    /* U+0052 "R" */
    0xff, 0x7f, 0xc0, 0x60, 0x3f, 0xff, 0xfb, 0x19,
    0x86, 0xc3, 0x60, 0xf0, 0x60,

    /* U+0053 "S" */
    0x7f, 0xff, 0xf0, 0x18, 0xf, 0xf3, 0xfc, 0x6,
    0x3, 0x1, 0xff, 0xff, 0xc0,

    /* U+0054 "T" */
    0xff, 0xff, 0xf0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,

    /* U+0055 "U" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xff, 0xf7, 0xf8,

    /* U+0056 "V" */
    0xc0, 0xf8, 0x19, 0x83, 0x30, 0xc7, 0x18, 0x67,
    0xc, 0xc0, 0xd8, 0x1e, 0x1, 0xc0, 0x30, 0x0,

    /* U+0057 "W" */
    0xc1, 0x83, 0xc1, 0xc3, 0x63, 0xc3, 0x63, 0xc6,
    0x63, 0xe6, 0x37, 0x66, 0x36, 0x6c, 0x36, 0x6c,
    0x3e, 0x3c, 0x1c, 0x38, 0x1c, 0x18,

    /* U+0058 "X" */
    0xe1, 0xdc, 0x63, 0x30, 0x7c, 0x1e, 0x3, 0x1,
    0xe0, 0xfc, 0x73, 0x98, 0x6c, 0x1c,

    /* U+0059 "Y" */
    0xc0, 0xd8, 0x66, 0x18, 0xcc, 0x33, 0x7, 0x81,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0,

    /* U+005A "Z" */
    0xff, 0xff, 0xc0, 0x60, 0xf0, 0xf0, 0xe1, 0xe1,
    0xc0, 0xc0, 0x7f, 0xff, 0xe0,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcf, 0xf0,

    /* U+005C "\\" */
    0x83, 0x4, 0x18, 0x60, 0x83, 0x4, 0x18, 0x60,
    0x83,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f, 0xf0,

    /* U+005E "^" */
    0x0, 0xc7, 0x9a, 0x4b, 0x30,

    /* U+005F "_" */
    0xff, 0xfc,

    /* U+0060 "`" */
    0xc9, 0x80,

    /* U+0061 "a" */
    0xc, 0x3, 0xc0, 0x78, 0xd, 0x83, 0x30, 0x67,
    0x1c, 0x63, 0xec, 0x7c, 0xd8, 0x1b, 0x3, 0x80,

    /* U+0062 "b" */
    0xff, 0x7f, 0xf0, 0x78, 0x3d, 0xfe, 0xff, 0x7,
    0x83, 0xc1, 0xff, 0xff, 0xc0,

    /* U+0063 "c" */
    0x7f, 0xff, 0xb0, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x7f, 0xdf, 0xc0,

    /* U+0064 "d" */
    0xff, 0x7f, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xff, 0xbf, 0xc0,

    /* U+0065 "e" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0xc0, 0xc0,
    0xc0, 0xff, 0x7f,

    /* U+0066 "f" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0,

    /* U+0067 "g" */
    0x7f, 0xff, 0xf0, 0x18, 0xc, 0xfe, 0x7f, 0x7,
    0x83, 0xc1, 0xff, 0xdf, 0xe0,

    /* U+0068 "h" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3f, 0xff, 0xff, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x60,

    /* U+0069 "i" */
    0xff, 0xff, 0xfc,

    /* U+006A "j" */
    0x3f, 0x3f, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x3, 0xff, 0xfe,

    /* U+006B "k" */
    0xc3, 0x61, 0xb1, 0x99, 0xcf, 0xc7, 0xe3, 0x39,
    0x8c, 0xc7, 0x61, 0xb0, 0xe0,

    /* U+006C "l" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xff, 0x7f,

    /* U+006D "m" */
    0xe0, 0x7f, 0xf, 0xf0, 0xff, 0x9b, 0xd9, 0xbd,
    0x9b, 0xcf, 0x3c, 0xf3, 0xc6, 0x3c, 0x3, 0xc0,
    0x30,

    /* U+006E "n" */
    0xe0, 0xfc, 0x3f, 0x8f, 0x63, 0xdc, 0xf3, 0x3c,
    0xef, 0x1b, 0xc7, 0xf0, 0xfc, 0x1c,

    /* U+006F "o" */
    0x7f, 0xbf, 0xfc, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xff, 0xf7, 0xf8,

    /* U+0070 "p" */
    0xff, 0x7f, 0xc0, 0x60, 0x3f, 0xff, 0xfb, 0x1,
    0x80, 0xc0, 0x60, 0x30, 0x0,

    /* U+0071 "q" */
    0x7f, 0x8f, 0xfc, 0xc0, 0xcc, 0xc, 0xc0, 0xcc,
    0xc, 0xc0, 0xcc, 0xc, 0xc0, 0xcf, 0xff, 0x7f,
    0xe0,

    /* U+0072 "r" */
    0xff, 0x7f, 0xc0, 0x60, 0x3f, 0xff, 0xfb, 0x19,
    0x86, 0xc3, 0x60, 0xf0, 0x60,

    /* U+0073 "s" */
    0x7f, 0xff, 0xf0, 0x18, 0xf, 0xf3, 0xfc, 0x6,
    0x3, 0x1, 0xff, 0xff, 0xc0,

    /* U+0074 "t" */
    0xff, 0xff, 0xf0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,

    /* U+0075 "u" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xff, 0xf7, 0xf8,

    /* U+0076 "v" */
    0xc0, 0xf8, 0x19, 0x83, 0x30, 0xc7, 0x18, 0x67,
    0xc, 0xc0, 0xd8, 0x1e, 0x1, 0xc0, 0x30, 0x0,

    /* U+0077 "w" */
    0xc1, 0x83, 0xc1, 0xc3, 0x63, 0xc3, 0x63, 0xc6,
    0x63, 0xe6, 0x37, 0x66, 0x36, 0x6c, 0x36, 0x6c,
    0x3e, 0x3c, 0x1c, 0x38, 0x1c, 0x18,

    /* U+0078 "x" */
    0xe1, 0xdc, 0x63, 0x30, 0x7c, 0x1e, 0x3, 0x1,
    0xe0, 0xfc, 0x73, 0x98, 0x6c, 0x1c,

    /* U+0079 "y" */
    0xc0, 0xd8, 0x66, 0x18, 0xcc, 0x33, 0x7, 0x81,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0,

    /* U+007A "z" */
    0xff, 0xff, 0xc0, 0x60, 0xf0, 0xf0, 0xe1, 0xe1,
    0xc0, 0xc0, 0x7f, 0xff, 0xe0,

    /* U+007B "{" */
    0x1c, 0x73, 0xc, 0x30, 0xc3, 0x3c, 0x70, 0xc3,
    0xc, 0x30, 0xf1, 0xc0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xc7, 0x1c, 0x63, 0x18, 0xc7, 0x39, 0x8c, 0x63,
    0x73, 0x80,

    /* U+007E "~" */
    0xe7, 0xf9, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 120, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 78, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 121, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 6, .adv_w = 190, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 18, .adv_w = 182, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 34, .adv_w = 205, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 208, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 75, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 64, .adv_w = 104, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 72, .adv_w = 104, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 80, .adv_w = 99, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 84, .adv_w = 90, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 88, .adv_w = 43, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 89, .adv_w = 89, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 91, .adv_w = 43, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 137, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 177, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 60, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 172, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 168, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 181, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 172, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 174, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 163, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 182, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 172, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 77, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 237, .adv_w = 75, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 239, .adv_w = 134, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 244, .adv_w = 121, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 248, .adv_w = 134, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 253, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 187, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 166, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 164, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 148, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 164, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 163, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 49, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 139, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 213, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 174, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 170, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 193, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 519, .adv_w = 162, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 166, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 167, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 254, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 159, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 599, .adv_w = 163, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 153, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 91, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 634, .adv_w = 137, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 643, .adv_w = 91, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 651, .adv_w = 97, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 656, .adv_w = 163, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 658, .adv_w = 89, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 660, .adv_w = 166, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 164, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 148, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 164, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 726, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 737, .adv_w = 163, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 763, .adv_w = 49, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 139, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 213, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 174, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 170, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 846, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 193, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 876, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 902, .adv_w = 162, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 916, .adv_w = 166, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 930, .adv_w = 167, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 946, .adv_w = 254, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 968, .adv_w = 159, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 982, .adv_w = 163, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 996, .adv_w = 153, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1009, .adv_w = 126, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1021, .adv_w = 66, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1025, .adv_w = 126, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1035, .adv_w = 143, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 5}
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
    -30, -30, -30, -30, -30, -30, -30, -30,
    10, 10, 10, 10, 24, 24, 24, 24,
    -24, -24, -5, -5, -33, -29, -29, -30,
    -30, -30, -30, -30, -21, -21, -21, -21,
    -21, -21, -21, -21, -21, -21, -30, -21,
    -30, -21, -5, -5, -30, 15, -21, 15,
    15, -24, 15, -30, 15, -24, 15, 15,
    -24, 15, -30, -10, -10, -21, -10, -10,
    -30, -10, -10, -30, -10, -10, -30, -30,
    -30, -30, 10, 10, 10, 10, 24, 24,
    24, 24, -24, -24, -5, -5, -29, -29,
    -30, -30, -30, -30, -21, -21, -21, -21,
    -21, -30, -21, -5, -5, 15, -24, 15,
    -30, 15, -21, 15, 15, -24, 15, -30,
    15, -24, 15, -10, -10, -10, -10, -30,
    -10, -10, -30, -10, -10
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
const lv_font_t ui_font_MO16 = {
#else
lv_font_t ui_font_MO16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_MO16*/

