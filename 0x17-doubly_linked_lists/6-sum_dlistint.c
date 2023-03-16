#include "lists.h"

/**
 * sum_dlistint - fucntion to add all values in linked list
 * @head: begining of list
 * Return: total sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int total;

	total = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
