#include <stdio.h>
/**
 * numLength - returns the length of a number
 * @num: operand number
 * Return: number of digits
 */
int numLength(unsigned long num)
{
	int length = 0;

	if (num == 0)
	{
		return 1;
	}

	while (num != 0)
	{
		num /= 10;
		length++;
	}

	return (length);
}

/**
 * main - prints the first 100 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, tmp;
	int i;

	for (i = 1; i <= 100; i++)
	{
		printf("%lu", f1);

		if (i != 100)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;
	}

	return (0);
}
