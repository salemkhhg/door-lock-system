/*
 * UART.h
 *
 * Created: 3/18/2023
 *      Author: salem
 */

#ifndef UART_H_
#define UART_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"

void UART_init(void);

void UART_sendByte(const uint8 data);

uint8 UART_recieveByte(void);

void UART_sendString(const uint8 *Str);

void UART_receiveString(uint8 *Str); // Receive until #

#endif /* UART_H_ */
