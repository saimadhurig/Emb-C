/**
 * @file main.c
 * @author sai madhuri g
 * @brief Activity_1
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "ledstatus.h"
#include "ReadingADC.h"
#include "OutPWM.h"
#include"UART.h"
#include<avr/io.h>


/**
 * @brief Initialize all the peripherals
 * 
 */

void init(void)
{
    /*Configure LED and Switch pins*/
    InitialiseLED();
    /*Configure ADC registers and pins*/
    InitialiseADC();
    /*Configure PWM registers and pins*/
    InitPWM();
    /*Configure UART serial communication pin*/
    InitUART(103);
}
    
   
uint16_t tem;
char tem_data;
int main(void)
{
    
     init();
    
    while(1)
    {
        if(SENSOR_IS_ON) //If switch_1 is ON
        {
            if(HEATER_ON) //If switch_2 is ON
            {
                ledstatus(LED_IS_ON);//LED is ON
                tem=ReadingADC(0);
                tem_data = OutPWM(temp);
                UARTwrite(tem_data);

            }
            else
            {
                
                ledstatus(LED_IS_OFF);
            }
        }
        else
        {
            ledstatus(LED_IS_OFF);//LED is OFF
            OCR1A=0;
        }
    }
    return 0;
}
