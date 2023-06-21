#include <stdio.h>
/**
 * Function to print all numbers from the given number to 98.
 * @param n The starting number.
 */
void print_to_98(int n)
{
	int n;

	for (n = 0; n <= 98; n++)
	{
		printf("%d, ", n);
	}

	printf("\n%d\n", n);

	for (n = 111; n >= 98; n--)
	{
		printf("%d, ", n);
	}

	printf("\n");

	for (n = 81; n <= 98; n++)
	{
		printf("%d, ", n);
	}

	print("\n");

	for (n = -10; n <= 98; n++)
	{
		printf("%d,", n);
	}
	return (0);
}
