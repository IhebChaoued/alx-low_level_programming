#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	int bit_position = (sizeof(unsigned long int) * 8) - 1;
	unsigned long int mask = 1UL << bit_position;
	int flag = 0;

	while (bit_position >= 0)
	{
		if (n & mask)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
		{
			_putchar('0');
		}

		bit_position--;
	}

	if (!flag)
		_putchar('0');
}
