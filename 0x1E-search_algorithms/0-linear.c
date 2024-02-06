#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 * the Linear search algorithm.
 * @array: Pointer to the array to search.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: The index of the found value, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
