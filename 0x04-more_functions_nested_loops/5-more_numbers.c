#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14,
 *                followed by a new line.
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
	}
	_putchar('\n');
}
