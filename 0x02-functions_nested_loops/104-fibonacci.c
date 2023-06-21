#include <stdio.h>
/**
 *  * numLength - returns the length of a number
 *   * @num: operand number
 *    * Return: number of digits
 *     */
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

	return length;
}

/**
 *  * main - prints the first 100 Fibonacci numbers
 *   * Return: 0
 *    */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp;
	int i;

	printf("%lu, %lu, ", f1, f2);

	for (i = 3; i <= 100; i++)
	{
		tmp = f1 + f2;
		printf("%lu", tmp);

		if (i != 100)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		f1 = f2;
		f2 = tmp;
	}

	return 0;
}

