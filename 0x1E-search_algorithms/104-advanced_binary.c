#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i;
	int result;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	if (size == 1 && array[0] != value)
		return (-1);

	i = (size - 1) / 2;

	if (array[i] == value)
	{
		if (i > 0 && array[i - 1] == value)
			return advanced_binary(array, i + 1, value);

		return (i);
	}
	else if (array[i] > value)
	{
		result = advanced_binary(array, i, value);
	}
	else
	{
		result = advanced_binary(array + i + 1, size - i - 1, value);
		if (result != -1)
			result += i + 1;
	}

	return (result);
}
