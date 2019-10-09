/*	Author: lim001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #3
 *	Exercise Description: Created a code for a program that outputs to port C the number of availble parking space (represented by port A pins 3 to 0). PC7 is now set to 1 if the lot is full
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
	DDRC = 0xFF; PORTC = 0x00;

	unsigned char tmpC  = 0x00;
    /* Insert your solution below */
    while (1) {
	if ( (PINA & 0x08) == 0x00) {
		tmpC += 0x01;
	}
	if ( (PINA & 0x04) == 0x00) {
		tmpC += 0x01;
	}
	if ( (PINA & 0x02) == 0x00) {
		tmpC += 0x01;
	}
	if ( (PINA & 0x01) == 0x00) {
		tmpC += 0x01;
	}
	if ( PINA == 0x0F ) {
		tmpC = tmpC | 0x80;
	}
	PORTC = tmpC;
	}
    return 0;
}
