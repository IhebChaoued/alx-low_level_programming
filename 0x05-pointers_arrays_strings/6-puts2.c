#include <stdio.h>
#include "main.h"
/**
 * puts2 - print every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: The string to be processed.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar("%c", str[i]);
		i += 2;
	}

	_putchar("\n");
}
