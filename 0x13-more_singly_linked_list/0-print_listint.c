#include "lists.h"

/**
 * print_listint - function to print all elements of a list
 * @h: the first pointer
 */

size_t print_listint(const listint_t *h)
{
	listint_t *ptr;

	size_t count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		printf("%d", ptr->n);
		ptr = ptr->next;
	}

	return (count);
}
