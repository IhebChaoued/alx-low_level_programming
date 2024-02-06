#include "search_algos.h"

/**
 * _binary_search - Binary search in a sorted array.
 * @array: Pointer to the first element
 * @left: Start index of the subarray
 * @right: End index of the subarray
 * @value: Value to search for
 *
 * Return: Index if found, else -1
 * Prints the subarray being searched after each change.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (!array)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;

		if (array[i] == value)
			return (i);

		(array[i] > value) ? (right = i - 1) : (left = i + 1);
	}

	return (-1);
}

/**
 * exponential_search - Exponential search in a sorted array.
 * @array: Pointer to the first element
 * @size: Number of elements
 * @value: Value to search for
 *
 * Return: Index if found, else -1
 * Prints a value every time it is compared in the array.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);

	return (_binary_search(array, i / 2, right, value));
}
