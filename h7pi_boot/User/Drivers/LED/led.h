#ifndef _LED_H__
#define _LED_H__

#include "stm32h7xx_hal.h"

/********************************************************
 *
 *LED �˿�����
 *
 ********************************************************/
#define LED1 GPIOC,GPIO_PIN_14
#define LED2 GPIOC,GPIO_PIN_15


/********************************************************
 *
 *LED ״̬����
	num��LED1,LED2
	state: 1,����0,��
 *
 ********************************************************/
void led(uint8_t num, uint8_t state);



#endif


