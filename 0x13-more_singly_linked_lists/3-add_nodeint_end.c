#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of list
 * @head: pointer to linked list
 * @n: value to add
 * Return: pointer value
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = ptr;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ptr;
	}

	return (*head);
}
