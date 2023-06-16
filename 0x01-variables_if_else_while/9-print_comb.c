#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success
 */
int main(void)
{
	int i;
	putchar('0');

	for (i = 0; i < 10; i++)
		{
			putchar(',');
			putchar(' ');
			putchar('0' + i);
		}

	putchar('\n');
	
	return (0);
}
