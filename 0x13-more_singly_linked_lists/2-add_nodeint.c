#include "lists.h"

/**
 * add_nodeint - adds new node to beginning of linked list
 * @head: address of pointer to linked list
 * @n: value to be added
 * Return: pointer to new beginning of list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	if (*head == NULL)
		ptr->next = NULL;
	else
		ptr->next = *head;

	ptr->n = n;

	*head = ptr;

	return (*head);
}
