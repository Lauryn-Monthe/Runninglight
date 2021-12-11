/**
  ******************************************************************************
  * @file    	main.c
  * @author		Florian von Zabiensky
  * @version 	V1.0
  * @date		14.03.2019
  * @brief  	Template using the LCD
  ******************************************************************************
*/


#include <lcd/lcd.h>
#include <RunningLight/runningLight.h>
#include "stm32f4xx.h"


int main(void)
{
	HAL_Init();
	lauflicht_init();

	while(1) {
		lauflicht_run();
	}
}
