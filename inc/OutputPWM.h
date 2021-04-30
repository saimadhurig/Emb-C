/**
 * @file OutputPWM.h
 * @author sai madhuri g
 * @brief Display the output of the temperature sensor
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __OUTPUTPWM_H__
#define __OUTPUTPWM_H__
#include<avr/io.h>
/**
 * @brief Function definition
 * 
 * @param temp_value 
 * @return char
 */
char OutPWM(uint16_t tem_value);
/**
 * @brief port configuration for PWM
 * 
 */
void InitialisePWM(void);
#endif
