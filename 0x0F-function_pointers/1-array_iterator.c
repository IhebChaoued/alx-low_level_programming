#include "function_pointers.h"
/**
 * array_iterator - Executes a function.
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 * @action: Takes an int argument and returns void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
