#include "lists.h"

/**
 * add_dnodeint_end - function to add node to end of list
 * @head: pointer to pointer of list beginning
 * @n: data value of list
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return(NULL);

	temp->prev = NULL;
	temp->next = NULL;
	temp->n = n;

	if (*head == NULL)
	{
		*head = temp;
		return(temp);
	}
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
	}

	temp->prev = h;
	h->next = temp;

	return(temp);
}
