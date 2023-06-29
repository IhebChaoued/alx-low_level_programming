#include "main.h"
/**
 * *string_toupper - Converst all lowercase letters to uppercase
 * @str: the string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != \0)
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
