/**
 * @file activity4.h
 * @author sai madhuri g
 * @brief USART serial communication
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H__
#include<avr/io.h>
/**
 * @brief Inittialize USART serial communication ports
 * 
 * @param ubrr 
 */
void InitialiseUSART(uint16_t ubrr);
/**
 * @brief Read characters from USART port
 * @return char
 */
char readUSART();
/**
 * @brief Write characters to USART port
 * 
 * @param data 
 */
void writeUSART(char data);

#endif
