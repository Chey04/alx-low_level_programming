#include "lists.h"

/**
 * print_listint - function to print all elements of a list
 * @h: the first pointer
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	printf("%d\n", h->n);

	return (count);
}
