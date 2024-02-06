#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	size_t low = bound / 2;
	size_t high = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search(array, low, high, value));
}

/**
 * binary_search - Searches for a value in a sorted array using
 *                 the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @low: The lower index of the subarray.
 * @high: The higher index of the subarray.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		print_subarray(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_subarray - Prints the subarray being searched.
 * @array: A pointer to the first element of the array.
 * @low: The lower index of the subarray.
 * @high: The higher index of the subarray.
 */
void print_subarray(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	for (; low < high; low++)
		printf("%d, ", array[low]);
	printf("%d\n", array[low]);
}
