/*	Author: lim001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #1
 *	Exercise Description: Created a code for a garage door sensor that sets PB0 to 1 if PA1 is 0 and PA0 is 1
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;

	unsigned char tmpB  = 0x00;
    /* Insert your solution below */
    while (1) {
	if ( (PINA & 0x03) == 0x01) {
		tmpB = 0x01;
	} else {
		tmpB = 0x00;
	}	
	PORTB = tmpB;
	}
    return 0;
}
