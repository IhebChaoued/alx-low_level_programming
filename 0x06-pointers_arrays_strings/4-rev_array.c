#include "main.h"
/**
 * reverse_array - revereses an array.
 * @a: pointer to array.
 * @n: number of elements of an array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
