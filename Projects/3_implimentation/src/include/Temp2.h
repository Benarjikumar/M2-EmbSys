#ifndef TEMP2_H_INCLUDED
#define TEMP2_H_INCLUDED

#include <avr/io.h>			/* Include AVR std. library file */
#include <util/delay.h>			/* Include Delay header file */

#define LCD_DIRECTION  DDRB			/* Define LCD data port direction */
#define PORT_B PORTB			/* Define LCD data port */
#define LCD_RS PB2				/* Define Register Select pin */
#define LCD_EN PB3 				/* Define Enable signal pin */

void LCD_CMD( unsigned char command );
void LCD_CHAR_WISE( unsigned char ch );
void LCD_INITIALIZATION(void);
void LCD_DISPLAY (char *temperature_value);
void CLEAR_LCD();

#endif