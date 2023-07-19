#include "function_pointers.h"
/**
 * print_name - Calls a function with a given name.
 * @name: A pointer to a character array (string).
 * @f: A function pointer to a function that takes a char *.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
