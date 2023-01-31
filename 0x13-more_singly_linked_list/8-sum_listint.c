#include "lists.h"

/**
 * sum_listint - function to return sum of all lists' data
 * @head: pointer to the first node of the linked list
 * Return: total sum of n
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
