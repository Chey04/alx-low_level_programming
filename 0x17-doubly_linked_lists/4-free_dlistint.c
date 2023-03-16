#include "lists.h"

/**
 * free_dlistint - fucntion to free doubly linked list
 * @head: list beginning
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

