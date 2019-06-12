/*
 * IRsensor.c
 *
 * Created: 11-06-2019 15:03:24
 * Author : Madhu
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#include <avr/io.h>
#endif
#define LED_OUTPUT PORTB

#define FIR_INPUT PINC

int main(void)
{
   DDRC=0X00;
   DDRB=0XFF; 

  
  while (1) 
 {
	 LED_OUTPUT =FIR_INPUT ;
	 
    }

}

