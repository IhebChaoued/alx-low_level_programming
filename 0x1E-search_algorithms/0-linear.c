#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using linear search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
