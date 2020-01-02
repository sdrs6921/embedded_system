#include <stdio.h>
#include "macro.h"

void main(void)
{
	unsigned char a = 0xf0;
	unsigned char b;

	clear_bit(a, 5);
	clear_bits(a, 0x7, 3);

	set_bit(a, 5);
	set_bits(a, 0x7, 3);

	invert_bit(a, 5);
	invert_bits(a, 0x7, 3);

	if (check_bit(a, 5))
		printf("true\n");
	else
		printf("false\n");

	b = extract_bits(a, 0x7, 4);
}
