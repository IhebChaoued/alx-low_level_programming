#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, len, half;

	len = strlen(str);
	half = len / 2;
	if (len % 2 != 0)
		half = half + 1;
	for (i = half; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
