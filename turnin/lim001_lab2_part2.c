/*	Author: lim001
 *  Partner(s) Name: FestoBwogi
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #2
 *	Exercise Description: [optional - include for your own benefit]
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
	PORTC = tmpC;
	}
    return 0;
}
