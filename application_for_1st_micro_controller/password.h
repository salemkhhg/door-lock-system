/* ---------------------------------------------------------------------------------------------------
 [FILE NAME]: <password.h>
 [AUTHOR(S)]: <salem_sobhy'>
 [DATE CREATED]: <Mar 21, 2023>
 [DESCRIPTION]: <Contains functions prototypes to handle the operation of taking 5 digit password from the user>
 ---------------------------------------------------------------------------------------------------*/

#ifndef PASSWORD_H_
#define PASSWORD_H_
#include "std_types.h"
#include "keypad.h"
#include "lcd.h"

void getPassword(uint8 array[]);

void prepareToSend(uint8 array[], uint8 array2[]);

#endif /* PASSWORD_H_ */
