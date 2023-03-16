#include "lists.h"
/**
 * dlistint_len - function to print the lenght of contents
 *              of a doubly linked list
 * @h: pointer to start of list
 * Return: lenght of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);

}

