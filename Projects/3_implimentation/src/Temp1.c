#include "Temp1.h"

/**
 * @brief Seating Checking and connfiguring the seat, heater and LED
 * 
 */
void Seat_check(){
    DDRD|=(1<<PD0); //Setting 
    DDRD&=~(1<<PD1); //clearing 
    PORTD|=(1<<PD1); //Setting 
    DDRD&=~(1<<PD2); //clearing 
    PORTD|=(1<<PD2); //Setting 
}
