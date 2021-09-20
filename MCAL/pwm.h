/*
 * pwm.h
 *
 * Created: 9/20/2021 11:27:36 PM
 *  Author: Omar
 */ 


#ifndef PWM_H_
#define PWM_H_

/*******
	Function Description: this function initiates PWM mode
	parameter: PWM_config_t: pointer to structure that holds the configurations
	return: none
*/
void PWM_init(PWM_config_t* configs);

/*******
	Function Description: this function starts pwm signals generation
	parameter: EN_dutyCycle_t: enum contains different duty cycles
	return: none
*/
void PWM_start(EN_dutyCycle_t dutyCycle);

/*******
	Function Description: this function stops pwm signals generation
	parameter: none
	return: none
*/
void PWM_stop();




#endif /* PWM_H_ */