#include "lists.h"

/**
 * get_dnodeint_at_index - function to get node at index
 * @head: beginning of list
 * @index: index
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i, count;

	if (head == NULL)
		return (NULL);

	count = 0;
	temp = head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (index >= count)
		return (NULL);

	else
	{
		temp = head;
		for (i = 0; i < index; i++)
		{
			temp = temp->next;
		}
	}
	return (temp);
}
