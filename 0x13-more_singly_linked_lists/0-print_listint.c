#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list of integers.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	struct listint_t *head = NULL;

	head = (struct listint_t *)malloc(sizeof(struct listint_t));

	head->data = 8;
	head->link = NULL;

	printf("%d, %d", head->data, head->link);
}
