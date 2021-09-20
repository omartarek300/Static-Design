/*
 * buttons.h
 *
 * Created: 9/19/2021 4:52:58 PM
 *  Author: Omar
 */ 


#ifndef BUTTONS_H_
#define BUTTONS_H_
#include "../MCAL/dio.h"

/**************************************FUNCTIONS PROTOTYPES**********************************/

/*******
Function Description: this function initiates the directions of the connected buttons
parameter: port_name: the port which the button is connected to
		 : button: the pins which the buttons connected on
return: none
*/
void button_init(uint8_t port_name, uint8_t button);

/*******
Function Description: this function reads the state of the button whether pressed or not
parameter: port_name: the port which the button is connected to
		 : button: the pins which the buttons connected on
return: none
*/
uint8_t read_button(uint8_t port_name, uint8_t button);



#endif /* BUTTONS_H_ */