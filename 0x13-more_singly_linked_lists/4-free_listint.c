#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: None (void).
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->n)
			free(head->n);
		free(head);
	}
}
