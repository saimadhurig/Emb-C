/**
 * @file ReadingADC.c
 * @author sai madhuri g
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include "ReadingADC.h"

uint16_t ReadingADC(uint8_t cha)
{
    
    ADMUX&=0xf8;
    cha=cha&0b00000111;
    ADMUX|=cha;
    
    ADCSRA|=(1<<ADSC);
    
    while(!(ADCSRA & (1<<ADIF)));
   
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
void InitialiseADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
    
}
