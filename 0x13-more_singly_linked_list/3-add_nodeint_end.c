#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of list
 * @head: pointer to linked list
 * @n: value to add
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if(ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	head->next->next = ptr;

	return (head);
}
