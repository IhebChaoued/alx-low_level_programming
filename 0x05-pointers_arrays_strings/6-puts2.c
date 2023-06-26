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
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
