#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list of integers.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d", current->data);
		count++;
		current = current->next;
	}
	return (count);
}
