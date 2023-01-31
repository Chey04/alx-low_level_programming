#include "lists.h"

/**
 * free_listint - frees a listint list
 * @h: pointer to linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;

	while (current != NULL)
	{
		current = current->next;
		free(current);
	}
}	
