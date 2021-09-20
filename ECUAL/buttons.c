/*
 * buttons.c
 *
 * Created: 9/19/2021 4:52:42 PM
 *  Author: Omar
 */ 
#include "buttons.h"
void button_init(uint8_t port_name, uint8_t button)
{
	DIO_init(PC,button);  // initialize Button pin
}
uint8_t read_button(uint8_t port_name, uint8_t button)
{
	return DIO_READ_BIT(port_name, button);
}