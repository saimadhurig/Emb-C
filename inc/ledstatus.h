
#ifndef __LEDSTATUS_H_
#define __LEDSTATUS_H_
/**
 * @file ledstatus.h
 * @author sai madhuri g
 * @brief Activity_1
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */



/**
 * Include files
 */ 
#include <avr/io.h>
#include "ledstatus.h"

//Macro definition 

#define TURN_LED_ON 	(0x01)			/**< LED state HIGH */
#define TURN_LED_OFF	(0x00)			/**< LED state LOW */


#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB1)   /**< LED Pin number  */
#define SENSOR_IS_ON !(PIND&(1<<PD1)) // Switch1 ON
#define HEATER_ON !(PIND&(1<<PD2)) // Switch2 ON

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void ledstatus(uint8_t state);
void InitialiseLED(void);

#endif /** __LEDSTATUS_H_ */
