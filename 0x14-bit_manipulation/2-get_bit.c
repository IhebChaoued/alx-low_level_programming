#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to retrieve the bit from.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the given index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i = 1 << index;

	if ((n & i) == 0)
		return (0);
	else
		return (1);
}
