
/**
 * @file ledstatus.c
 * @author sai madhuri g
 * @brief Chanfes the state of LED
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
// include files
#include<avr/io.h>
#include "ledstatus.h"
/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void ledstatus(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
void InitLED(void)
{
	DDRB|=(1<<PB1);
    DDRD&=~(1<<PD1);
    PORTD|=(1<<PD1);
    PORTD|=(1<<PD2);
}
