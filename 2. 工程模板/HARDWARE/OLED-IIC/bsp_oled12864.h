#ifndef _BSP_OLED12864_H
#define  _BSP_OLED12864_H

#include "msp.h"

typedef uint8_t  u8;

/*OLEDģ��ӿں���--------------------------------------------------------*/
//OLED��ʼ������
void OLED_Init(void);
//OLEDˢ����ʾ����
void OLED12864_New_Display_Ser(void);
//��ʾ��ֵ8x16
void OLED_Show_number_8x16(uint8_t PAGE,uint8_t SEG16,uint16_t t);
//��ʾ������8x16
void OLED_Show_floatnumber_8x16(uint8_t PAGE,uint8_t SEG16,float t);
//��ʾ������12x24
void OLED_Show_floatnumber_12x24(uint8_t PAGE,uint8_t SEG16,float t);
//��ʾ��ֵ12x24
void OLED_Show_number_12x24(uint8_t PAGE,uint8_t SEG16,uint16_t t);
//��ʾ�ַ���
void OLED_Show_string1_8x16(uint8_t PAGE,uint8_t SEG16,char *p);
//������ʾ
void OLED_Display_Chinese_16x16(uint8_t PAGE,uint8_t SEG16,uint8_t data);
//bmpͼƬ��ʾ
void OLED_Display_Photo(uint8_t const *meg);
//12*24�ַ���ʾ
void OLED_Show_string_12x24(uint8_t PAGE,uint8_t SEG16,char *p);
//���͵����ݴ���ά����OLED12864_Write_Buffer�л�ȡ 
void IIC_OLED12864_Write_PhotoData(uint8_t PAGE,uint8_t SEG16);
//����
void OLED_Delet(void);
void RAM_Delet(void);
/*----------------------------------------------------------------------*/
extern uint8_t OLED_BMP[];
extern uint8_t OLEED_Modify_Allow;
#endif  /*_BSP_OLED12864_H*/






























































