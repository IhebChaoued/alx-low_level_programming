#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * ...: Variable number of arguments representing the strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; ++i)
    {
        char *str = va_arg(args, char *);

        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);

        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }

    va_end(args);

    printf("\n");
}
