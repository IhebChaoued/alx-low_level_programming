#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: Pointer to the pointer of the head of the linked list.
 *
 * Return: None (void).
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
