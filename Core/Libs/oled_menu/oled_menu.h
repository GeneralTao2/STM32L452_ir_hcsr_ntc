/*
 * oled_menu.h
 *
 *  Created on: Jul 9, 2020
 *      Author: ar725
 */

#ifndef LIBS_OLED_MENU_OLED_MENU_H_
#define LIBS_OLED_MENU_OLED_MENU_H_

#include "../Libs/NTC_sensor/NTC_sensor.h"
#include "../Libs/ir_obstacle_sensor/ir_obstacle_sensor.h"
#include "../Libs/hcsr04_IC/hcsr04.h"
#include "../Libs/encoder/encoder.h"
#include "../Libs/ssd1306/ssd1306.h"
#include <stdio.h>

extern Encoder_HandleTypeDef encoder;
extern IR_ObstacleSN_HandleTypeDef irsn;
extern HCSR04_HandleTypeDef hcsr;
extern NTC_Sensor_HnadleTypeDef ntc;

void OLED_PrintMenu(void);

void OLED_Print_irsn(void);

void OLED_Print_hcsr(void);

void OLED_Print_ntc(void);


#endif /* LIBS_OLED_MENU_OLED_MENU_H_ */
