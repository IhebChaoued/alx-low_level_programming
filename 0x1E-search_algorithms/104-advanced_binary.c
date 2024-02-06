#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive binary search in a sorted array.
 * @array: Pointer to the first element of the subarray
 * @left: Start index of the subarray
 * @right: End index of the subarray
 * @value: Value to search for
 *
 * Return: Index if found, else -1
 * Prints the subarray being searched after each change.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;

	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);

	(array[i] >= value) ? (advanced_binary_recursive(array, left, i, value))
		: (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Advanced binary search in a sorted array.
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index if found, else -1
 * Prints the subarray being searched after each change.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
