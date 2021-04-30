/**
 * @file OutputPWM.c
 * @author sai madhuri g
 * @brief Configure the PWM wave according to temperature
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"OutputPWM.h"
#include<util/delay.h>
#include<avr/io.h>
/**
 * @brief Output with respect to analog input
 * 
 * @param ADC_val 
 */
char OutputPWM (uint16_t ADC_value)
{
    
    char tempe;

    if((ADC_value>=0) && (ADC_value<=209)){

        OCR1A = 205; 
        tempe = 20;
        _delay_ms(20);
    }
    else if((ADC_value>=210) && (ADC_value<=509)){

        OCR1A = 410; 
        tempe = 25;
       _delay_ms(20);
    }
    else if((ADC_value>=510) && (ADC_value<=709)){

        OCR1A = 717;
        tempe = 29;
        _delay_ms(20);
    }
    else if((ADC_value>=710) && (ADC_value<=1024)){

        OCR1A = 973; 
        tempe = 33;
        _delay_ms(20);
    }
    else{
        OCR1A = 0; 
        tempe = 0;
    }
    return tempe;
}
/**
 * @brief initializing timer and counter register
 * 
 */
void InitialisePWM(void)
{
    /*Configuring the registers and ports*/
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB|=(1<<PB1);

}
