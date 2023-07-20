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
	int x = 0, y = n;
	va_list p;

	if (!n)
		return (0);
	va_start(p, n);
	while (i--)
		s += va_arg(p, int);
	va_end(p);
	return (x);
}
