#include "lists.h"

/**
 * print_listint - function to print all elements of a list
 * @h: the first pointer
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		count++;
		printf("%d", h->n);
		h = h->next;
	}

	printf("%d\n", h->n);

	return (count);
}
