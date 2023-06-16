#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 indicate success.
 */
nclude <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
					return (0);
}
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("the number is: %d\n", n);

	if (n > 0) {
		printf("is positive\n");
	}
	else if (n == 0) {
		printf("is zero\n");
	}
	else (n < 0) {
		printf'"is negative\n");
	}

	return (0);
}
