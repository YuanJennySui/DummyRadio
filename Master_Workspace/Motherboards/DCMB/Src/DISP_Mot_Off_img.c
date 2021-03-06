#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_DISP_MOT_OFF_IMG
#define LV_ATTRIBUTE_IMG_DISP_MOT_OFF_IMG
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_DISP_MOT_OFF_IMG uint8_t DISP_Mot_Off_img_map[] = {
  0x05, 0x05, 0x05, 0xff, 	/*Color of index 0*/
  0x6e, 0x6f, 0x6e, 0xff, 	/*Color of index 1*/
  0xa4, 0xa6, 0xa4, 0xff, 	/*Color of index 2*/
  0x40, 0x3e, 0x40, 0xff, 	/*Color of index 3*/
  0x20, 0x22, 0x20, 0xff, 	/*Color of index 4*/
  0x93, 0x95, 0x93, 0xff, 	/*Color of index 5*/
  0xc9, 0xc7, 0xc9, 0xff, 	/*Color of index 6*/
  0x0f, 0x10, 0x0f, 0xff, 	/*Color of index 7*/
  0xb7, 0xb8, 0xb7, 0xff, 	/*Color of index 8*/
  0x5d, 0x5b, 0x5d, 0xff, 	/*Color of index 9*/
  0x81, 0x82, 0x81, 0xff, 	/*Color of index 10*/
  0x2f, 0x2f, 0x2f, 0xff, 	/*Color of index 11*/
  0x9e, 0x9e, 0x9e, 0xff, 	/*Color of index 12*/
  0x4a, 0x4c, 0x4a, 0xff, 	/*Color of index 13*/
  0xcc, 0xce, 0xcc, 0xff, 	/*Color of index 14*/
  0xae, 0xaf, 0xae, 0xff, 	/*Color of index 15*/

  0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe0, 
  0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0x68, 0x6e, 0xee, 0xe6, 0x86, 0xee, 0xe0, 
  0xee, 0x6d, 0x43, 0xfe, 0xee, 0xed, 0x4b, 0x6e, 0xee, 0xa4, 0xb5, 0xee, 0xe0, 
  0xee, 0x3d, 0xf1, 0x76, 0xee, 0xf7, 0xee, 0xee, 0xee, 0xbc, 0xee, 0xee, 0xe0, 
  0xe8, 0x0f, 0xe6, 0x75, 0x69, 0x37, 0x99, 0x6e, 0xa9, 0x0d, 0x9c, 0xee, 0xe0, 
  0xe2, 0x0e, 0xee, 0xb1, 0x65, 0x14, 0x55, 0x6e, 0x25, 0x7a, 0x58, 0xee, 0xe0, 
  0xe5, 0x7e, 0xee, 0x39, 0xee, 0x54, 0xee, 0xee, 0xee, 0x7f, 0xee, 0xee, 0xe0, 
  0xec, 0x0e, 0xee, 0xb1, 0xee, 0x54, 0xee, 0xee, 0xee, 0x7f, 0xee, 0xee, 0xe0, 
  0xef, 0x08, 0xee, 0x4a, 0xee, 0x54, 0xee, 0xee, 0xee, 0x7f, 0xee, 0xee, 0xe0, 
  0xee, 0x41, 0xec, 0x06, 0xee, 0x54, 0xee, 0xee, 0xee, 0x7f, 0xee, 0xee, 0xe0, 
  0xee, 0x27, 0x47, 0xae, 0xee, 0x54, 0xee, 0xee, 0xee, 0x7f, 0xee, 0xee, 0xe0, 
  0xee, 0xee, 0x86, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe0, 
  0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe0, 
  0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe0, 
};

const lv_img_dsc_t DISP_Mot_Off_img = {
  .header.always_zero = 0,
  .header.w = 25,
  .header.h = 14,
  .data_size = 246,
  .header.cf = LV_IMG_CF_INDEXED_4BIT,
  .data = DISP_Mot_Off_img_map,
};
