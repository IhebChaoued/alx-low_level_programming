#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the input parameters.
 * @n: The number of parameters.
 * ...: Variable number of arguments.
 *
 * Return: The sum of all input parameters. If n is 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return 0;
	}

	int sum = 0;
	va_list args;
	va_start(args, n);

	for (unsigned int i = 0; i < n; ++i)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return sum;
}
