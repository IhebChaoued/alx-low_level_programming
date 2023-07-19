#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: A pointer to the array.
 * @size: The number of elements in the array.
 * @cmp: A function pointer to the function
 *       that takes an int argument and returns an int.
 *
 * Return: The index of the first element
 *         for which the cmp function does not return 0.
 *         If no such element is found, or if size <= 0, -1 is returned.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
