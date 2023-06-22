#include <stdio.h>
/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: (0) Success
 */
int main(void)
{
	long int number = 612852475143;
	long int prime = 2;

	while (number > prime)
	{
		if (number % prime == 0)
		{
			number = number / prime;
		}
		else
		{
			prime++;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
