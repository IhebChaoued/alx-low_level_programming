#include "funtcion_pointers.h"

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
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[index]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
