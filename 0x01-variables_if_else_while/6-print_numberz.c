#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int sum = i + '0';

		putchar(sum);
	}

	putchar('\n');

	return (0);
}
