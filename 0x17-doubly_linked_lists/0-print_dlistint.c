#include "lists.h"
/**
 * print_dlistint - function to print the contents
 *              of a doubly linked list
 * @h: pointer to start of list
 * Return: lenght of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);

}

