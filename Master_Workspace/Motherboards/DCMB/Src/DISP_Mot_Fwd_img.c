#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_DISP_MOT_FWD_IMG
#define LV_ATTRIBUTE_IMG_DISP_MOT_FWD_IMG
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_DISP_MOT_FWD_IMG uint8_t DISP_Mot_Fwd_img_map[] = {
  0x08, 0x08, 0x08, 0xff, 	/*Color of index 0*/
  0x76, 0x75, 0x76, 0xff, 	/*Color of index 1*/
  0x4a, 0x49, 0x4a, 0xff, 	/*Color of index 2*/
  0xb1, 0xaf, 0xb1, 0xff, 	/*Color of index 3*/
  0x25, 0x24, 0x25, 0xff, 	/*Color of index 4*/
  0x68, 0x68, 0x68, 0xff, 	/*Color of index 5*/
  0xc6, 0xc5, 0xc6, 0xff, 	/*Color of index 6*/
  0x97, 0x96, 0x97, 0xff, 	/*Color of index 7*/
  0x1a, 0x1b, 0x1a, 0xff, 	/*Color of index 8*/
  0x87, 0x86, 0x87, 0xff, 	/*Color of index 9*/
  0x38, 0x36, 0x38, 0xff, 	/*Color of index 10*/
  0x58, 0x57, 0x58, 0xff, 	/*Color of index 11*/
  0xba, 0xbb, 0xba, 0xff, 	/*Color of index 12*/
  0xcc, 0xce, 0xcc, 0xff, 	/*Color of index 13*/
  0xa4, 0xa2, 0xa4, 0xff, 	/*Color of index 14*/
  0x0e, 0x0f, 0x0e, 0xff, 	/*Color of index 15*/

  0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 
  0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xc6, 0xdd, 0xd0, 
  0xdd, 0x5a, 0xaa, 0xa1, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x21, 0xdd, 0xd0, 
  0xdd, 0x22, 0x77, 0x73, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x21, 0xdd, 0xd0, 
  0xdd, 0x2b, 0xdd, 0xdd, 0x5c, 0xdd, 0xdd, 0x5c, 0xd1, 0x25, 0x21, 0xdd, 0xd0, 
  0xdd, 0x2b, 0x66, 0x6d, 0xa7, 0xdd, 0xdc, 0x0d, 0x98, 0x75, 0x01, 0xdd, 0xd0, 
  0xdd, 0x20, 0xff, 0xf3, 0x55, 0xdb, 0xc7, 0xad, 0x29, 0xdd, 0x41, 0xdd, 0xd0, 
  0xdd, 0x2b, 0xdd, 0xdd, 0x7a, 0x38, 0x15, 0x5d, 0x8e, 0xdd, 0x21, 0xdd, 0xd0, 
  0xdd, 0x2b, 0xdd, 0xdd, 0x6f, 0x59, 0x2a, 0x7d, 0x87, 0xdd, 0xa1, 0xdd, 0xd0, 
  0xdd, 0x2b, 0xdd, 0xdd, 0xd4, 0x46, 0xaf, 0x6d, 0xbb, 0xdc, 0x01, 0xdd, 0xd0, 
  0xdd, 0x2b, 0xdd, 0xdd, 0xdb, 0xad, 0x54, 0xdd, 0xc4, 0x44, 0xa1, 0xdd, 0xd0, 
  0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xcd, 0xdd, 0xdd, 0xd0, 
  0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 
  0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xd0, 
};

const lv_img_dsc_t DISP_Mot_Fwd_img = {
  .header.always_zero = 0,
  .header.w = 25,
  .header.h = 14,
  .data_size = 246,
  .header.cf = LV_IMG_CF_INDEXED_4BIT,
  .data = DISP_Mot_Fwd_img_map,
};
