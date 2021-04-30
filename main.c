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
#include "ReadADC.h"
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
    InitADC();
    /*Configure PWM registers and pins*/
    InitPWM();
    /*Configure UART serial communication pin*/
    InitUART(103);
}
    
   
uint16_t temp;
char temp_data;
int main(void)
{
    /*uint16_t temp;*/
    // Initialize peripherals
    init();
    
    while(1)
    {
        if(IS_SENSOR_ON) //If switch_1 is ON
        {
            if(HEAT_ON) //If switch_2 is ON
            {
                ledstatus(TURN_LED_ON);//LED is ON
                temp=ReadADC(0);
                temp_data = OutPWM(temp);
                UARTwrite(temp_data);

            }
            else
            {
                
                ledstat(TURN_LED_OFF);
            }
        }
        else
        {
            ledstatus(TURN_LED_OFF);//LED is OFF
            OCR1A=0;
        }
    }
    return 0;
}
