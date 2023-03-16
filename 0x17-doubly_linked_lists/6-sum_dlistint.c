#include "lists.h"

/**
 * sum_dlistint - fucntion to add all values in linked list
 * @head: begining of list
 * Return: total sum
 */

int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);

	dlistint_t *temp;
	int total = 0;

	temp = head;

	while (temp != NULL)
	{
		total += temp->n;
		temp = temp->n;
	}
	return (total);
}
