#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is", n);
	printf("%d", abs(n % 10));
	if (abs(n % 10) > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (abs(n % 10) == 0)
	{
		printf("%d and is 0\n", n);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", n);
	}

	return (0);
}
