#ifndef _BSP_OLED12864_H
#define  _BSP_OLED12864_H

#include "msp.h"

typedef uint8_t  u8;

/*OLED模块接口函数--------------------------------------------------------*/
//OLED初始化函数
void OLED_Init(void);
//OLED刷新显示函数
void OLED12864_New_Display_Ser(void);
//显示数值8x16
void OLED_Show_number_8x16(uint8_t PAGE,uint8_t SEG16,uint16_t t);
//显示浮点数8x16
void OLED_Show_floatnumber_8x16(uint8_t PAGE,uint8_t SEG16,float t);
//显示浮点数12x24
void OLED_Show_floatnumber_12x24(uint8_t PAGE,uint8_t SEG16,float t);
//显示数值12x24
void OLED_Show_number_12x24(uint8_t PAGE,uint8_t SEG16,uint16_t t);
//显示字符串
void OLED_Show_string1_8x16(uint8_t PAGE,uint8_t SEG16,char *p);
//中文显示
void OLED_Display_Chinese_16x16(uint8_t PAGE,uint8_t SEG16,uint8_t data);
//bmp图片显示
void OLED_Display_Photo(uint8_t const *meg);
//12*24字符显示
void OLED_Show_string_12x24(uint8_t PAGE,uint8_t SEG16,char *p);
//发送的数据从三维数组OLED12864_Write_Buffer中获取 
void IIC_OLED12864_Write_PhotoData(uint8_t PAGE,uint8_t SEG16);
//清屏
void OLED_Delet(void);
void RAM_Delet(void);
/*----------------------------------------------------------------------*/
extern uint8_t OLED_BMP[];
extern uint8_t OLEED_Modify_Allow;
#endif  /*_BSP_OLED12864_H*/






























































