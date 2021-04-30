/**
 * @file ReadingADC.h
 * @author sai madhuri g
 * @brief ADC function definition
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __READINGADC_H__
#define __READINGADC_H__
/**
 * @brief Reading the analog input and returning a digital 8bit value
 * 
 * @param ch 
 * @return uint16_t 
 */

void InitialiseADC();
uint16_t ReadingADC(uint8_t ch);
#endif
