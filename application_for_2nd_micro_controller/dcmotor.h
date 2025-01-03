/*
 * dcmotor.h
 *
 * Created: 3/18/2023
 *      Author: salem
 */

#ifndef DCMOTOR_H_
#define DCMOTOR_H_

#include "micro_config.h"

#define MOTOR_DIRECTION DDRC
#define MOTOR_OUTPUT PORTC
#define IN1 PC2
#define IN2 PC3
void DCMOTOR_Init();
void DCMOTOR_onClockWise(uint16 duty_cycle);
void DCMOTOR_onAntiClockWise(uint16 duty_cycle);
void DCMOTOR_stop();

#endif /* DCMOTOR_H_ */
