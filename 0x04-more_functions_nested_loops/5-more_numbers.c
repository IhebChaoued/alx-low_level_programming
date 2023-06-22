#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
	}
	_putchar('\n');
}
