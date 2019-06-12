/*
 * DCmotor.c
 *
 * Created: 11-06-2019 09:55:35
 * Author : Madhu
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) 
  
{
	DDRD=0XFF;
	
    
    while (1) 
    {
	PORTD|=(1<<PD0);
	PORTD&=~(1<<PD1);
	_delay_ms(2000);
	PORTD&=~(1<<PD0);
	PORTD&=~(1<<PD1);
	_delay_ms(2000);
	PORTD|=(1<<PD1);
	PORTD&=~(1<<PD0);
	_delay_ms(2000);
	
  }
}

