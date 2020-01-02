#include <stdio.h>

/*
   modifying three_bits_binary__displayer.c
   1. Accessing Memory without pointer
   2. Reducing  display Function Line
 */
#define	PA	(*(volatile unsigned  char *) 0x30000000) //Poty PA Memory

void init(void);
void display(int digit);

void main(void)
{
	int i, j;
	init();

	while (1) {
		for (i = 0; i < 8; i++) {
			display(i);
			for (j = 0; j < 10000; j++);//delay loop
		}
	}
}

void init(void)
{
	PA &= (0X7 << 5); //Initialize All LED OFF
}

void display(int digit)
{
	//LED3 ON, OFF
	(digit & 0x1) ? (PA &= ~(0X1 << 5)) : (PA |= (0X1 << 5));
	//LED2 ON, OFF
	(digit & 0x2) ? (PA &= ~(0X1 << 6)) : (PA |= (0X1 << 6));
	//LED1 ON, OFF
	(digit & 0x4) ? (PA &= ~(0X1 << 7)) : (PA |= (0X1 << 7));
}
