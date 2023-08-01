#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *loop_start = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;

		if (current == loop_start)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}

		if (current == NULL && head != NULL)
		{
			loop_start = head;
			current = loop_start->next;
		}
	}

	return (count);
}
