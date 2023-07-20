#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * ...: Variable number of arguments representing the integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	while (i--)
	{
		printf("%d", va_arg(ap, int));

		if (i > 0 && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);

	printf("\n");
}

