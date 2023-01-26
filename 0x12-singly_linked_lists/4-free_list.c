#include "lists.h"

/**
 * free_list - free single linked list
 * @head: pointer to first node
 * @Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	
	}
}
