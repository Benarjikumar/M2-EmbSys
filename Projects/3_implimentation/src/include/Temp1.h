#ifndef TEMP1_H_INCLUDED
#define TEMP1_H_INCLUDED

#include <avr/io.h>
#include<util/delay.h>

#define Seat_check !(PIND &(1<<PD1))
#define Heater_on (PIND &(1<<PD2))
#define Heater_off PORTD&=~(1<<PD2)
#define LED_ON PORTD|=(1<<PD0)
#define LED_OFF PORTD &=~(1<<PD0)

void Seat_check();

#endif 
