#include "lists.h"

/**
 * add_dnodeint - function to add node to front of list
 * @head: address to address of first node
 * @n: data for new nodes
 * Return: pointer to new list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *h;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	temp->next = h;
	if (h != NULL)
		h->prev = temp;
	*head = temp;

	return (temp);
}
