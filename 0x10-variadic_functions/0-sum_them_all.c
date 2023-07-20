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
	int s = 0;
	va_list ap;

	if (!n)
		return (0);

	va_start(ap, n);
	while (n--)
		s += va_arg(ap, int);
	va_end(ap);

	return (s);
}
