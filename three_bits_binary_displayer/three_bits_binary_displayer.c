#include <stdio.h>

char *p = (char *) 0x30000000; //memory address

void init(void);
void display(int digit);

void main(void)
{
	int i, j;
	init();

	while (1) {
		for (i = 0; i < 8; i++) {
			display(i);
			for (j = 0; j < 100000; j++);//delay loop
		}
	}
}

void init(void)
{
	*p |= (0x7 << 5); // set memory PA[7:5] LED OFF
}


void display(int digit)
{
	init(); //all LED OFF
	switch (digit)
	{
		case 1:
			*p &= ~(0x1 << 5);
			break;
		case 2:
			*p &= ~(0x2 << 5);
			break;
		case 3:
			*p &= ~(0x3 << 5);
			break;
		case 4:
			*p &= ~(0x1 << 7);
			break;
		case 5:
			*p &= ~(0x5 << 5);
			break;
		case 6:
			*p &= ~(0x3 << 6);
			break;
		case 7:
			*p &= ~(0x7 << 5);
			break;
	}
}

