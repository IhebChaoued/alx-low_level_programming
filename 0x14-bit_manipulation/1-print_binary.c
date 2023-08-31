#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int result;
	unsigned int count;

	result = 1;
	for (count = 1; count <= pow; count++)
		result *= base;
	return (result);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num, final;
	char a;

	a = 0;
	num = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (num != 0)
	{
		final = n & num;
		if (final == num)
		{
			a = 1;
			_putchar('1');

		}
		else if (a == 1 || num == 1)
		{
			_putchar('0');
		}
		num >>= 1;
	}
}
