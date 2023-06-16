#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar (letter);
		}
	}

	putchar ('\n');

	return (0);
}
