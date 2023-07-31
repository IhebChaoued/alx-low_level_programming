#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: None (void).
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
