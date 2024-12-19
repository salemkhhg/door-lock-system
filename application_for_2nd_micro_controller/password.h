/*
 * password.h
 *
 * Created: 3/18/2023
 *      Author: salem
 */

#ifndef PASSWORD_H_
#define PASSWORD_H_
#include "std_types.h"
#include "keypad.h"
#include "lcd.h"

void getPassword(uint8 array[]);
uint8 compareTwoPasswords(uint8 arr1[], uint8 arr2[]);
void prepareToSend(uint8 array[], uint8 array2[]);
#endif /* PASSWORD_H_ */
