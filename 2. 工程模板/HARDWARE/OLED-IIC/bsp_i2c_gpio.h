#ifndef _BSP_I2C_GPIO_H
#define _BSP_I2C_GPIO_H


#include <inttypes.h>
#include "msp.h"

#define I2C_WR	0		/* 写控制bit */
#define I2C_RD	1		/* 读控制bit */


/* 定义I2C总线连接的GPIO端口, 用户只需要修改下面4行代码即可任意改变SCL和SDA的引脚 */
#define GPIO_PORT_I2C	GPIO_PORT_P3		/* GPIO端口 */
//#define RCC_I2C_PORT 	RCC_APB2Periph_GPIOC		/* GPIO端口时钟 */
#define I2C_SCL_PIN		GPIO_PIN5		/* 连接到SCL时钟线的GPIO */
#define I2C_SDA_PIN		GPIO_PIN7			/* 连接到SDA数据线的GPIO */


/* 定义读写SCL和SDA的宏，已增加代码的可移植性和可阅读性 */
#define I2C_SCL_1()  GPIO_setOutputHighOnPin(GPIO_PORT_I2C, I2C_SCL_PIN)		/* SCL = 1 */
#define I2C_SCL_0()  GPIO_setOutputLowOnPin(GPIO_PORT_I2C, I2C_SCL_PIN)		/* SCL = 0 */

#define I2C_SDA_1()  GPIO_setOutputHighOnPin(GPIO_PORT_I2C, I2C_SDA_PIN)		/* SDA = 1 */
#define I2C_SDA_0()  GPIO_setOutputLowOnPin(GPIO_PORT_I2C, I2C_SDA_PIN)		/* SDA = 0 */

#define I2C_SDA_READ()  GPIO_getInputPinValue(GPIO_PORT_I2C, I2C_SDA_PIN)	/* 读SDA口线状态 */



//int I2C_SDA_READ(void)  ;
void i2c_Start(void);
void i2c_Stop(void);
void i2c_SendByte(uint8_t _ucByte);
uint8_t i2c_ReadByte(void);
uint8_t i2c_WaitAck(void);
void i2c_Ack(void);
void i2c_NAck(void);
uint8_t i2c_CheckDevice(uint8_t _Address);

#endif

