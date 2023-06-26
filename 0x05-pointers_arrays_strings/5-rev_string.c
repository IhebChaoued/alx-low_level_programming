#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - reverse a string.
 *
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
