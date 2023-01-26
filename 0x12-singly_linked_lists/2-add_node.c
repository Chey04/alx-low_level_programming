#include "lists.h"

/**
 * add_node - adds a node to the beginning of the list
 * @head: pointer to fist node on list
 * @str: new string to add to list
 * Return: NULL or pointer to new beginning
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	list_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
		new_node->next = *head;

	new_node->str = strdup(str);
	new_node->len = str_len;
	*head = new_node;

	return(*head);
}
