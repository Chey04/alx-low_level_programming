#include "lists.h"

/**
 * list_len - gets the amounts of nodes
 * @h: first node pointer
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return(0);

	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
