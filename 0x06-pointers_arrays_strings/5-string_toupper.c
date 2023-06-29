#include "main.h"
/**
 * *string_toupper - Converst all lowercase letters to uppercase
 * @str: the string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *i = str;

	while (*i != '\0')
	{
		*i = toupper(*i);
		i++;
	}
	return (str);
}
