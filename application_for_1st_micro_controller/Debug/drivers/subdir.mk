################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/IntEEPROM.c \
../drivers/keypad.c \
../drivers/lcd.c \
../drivers/password.c \
../drivers/timer0_normal.c \
../drivers/uart.c 

OBJS += \
./drivers/IntEEPROM.o \
./drivers/keypad.o \
./drivers/lcd.o \
./drivers/password.o \
./drivers/timer0_normal.o \
./drivers/uart.o 

C_DEPS += \
./drivers/IntEEPROM.d \
./drivers/keypad.d \
./drivers/lcd.d \
./drivers/password.d \
./drivers/timer0_normal.d \
./drivers/uart.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c drivers/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


