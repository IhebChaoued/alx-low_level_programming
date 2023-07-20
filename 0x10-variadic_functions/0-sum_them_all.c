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
	va_list args;
	int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_args(args, int);
	}
	va_end(args);
	return (sum);
}
