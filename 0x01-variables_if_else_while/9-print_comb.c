#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success
 */
int main(void)
{
	putchar('0');

	for (int i = 1; i < 10; i++)
		{
			putchar(',');
			putchar(' ');
			putchar('0' + i);
		}

	putchar('\n');
	
	return (0);
}
