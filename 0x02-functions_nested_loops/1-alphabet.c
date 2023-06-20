#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
