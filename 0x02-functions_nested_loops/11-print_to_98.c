#include "main.h"
#include <stdio.h>
/**
 * Prints all natural numbers from n to 98, followed by a new line.
 * Numbers are separated by a comma, followed by a space.
 * Numbers are printed in order.
 * The first printed number is the number passed to the function.
 * The last printed number is 98.
 *
 * @param n The starting number.
 */
void print_to_98(int n)
{
	int i;
	for (i = n; i <= 98; ++i)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d\n", i);
		}
	}
}
