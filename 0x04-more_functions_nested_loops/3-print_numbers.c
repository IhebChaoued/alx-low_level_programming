#include "main.h"
#include <ctype.h>

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}
