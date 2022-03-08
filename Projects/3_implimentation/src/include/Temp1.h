#ifndef TEMP1_H_INCLUDED
#define TEMP1_H_INCLUDED

#include <avr/io.h>
#include<util/delay.h>

#define SEAT_CHECK !(PIND &(1<<PD1))
#define HEATER_ON (PIND &(1<<PD2))
#define HEATER_OFF PORTD&=~(1<<PD2)
#define LED_ON PORTD|=(1<<PD0)
#define LED_OFF PORTD &=~(1<<PD0)

void Seat_check();

#endif 
