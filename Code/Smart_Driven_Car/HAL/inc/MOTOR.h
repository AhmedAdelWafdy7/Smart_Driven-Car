/*
 * MOTOR.h
 *
 *  Created on: Apr 26, 2023
 *      Author: Ahmed Adel Wafdy
 */

#ifndef INC_MOTOR_H_
#define INC_MOTOR_H_

#include "GPIO.h"


void HAL_MOTORS_Init(void);
void STOP(void);
void forword(void);
void BACK(void);
void LEFT(void);
void RIGHT(void);

#endif /* INC_MOTOR_H_ */
