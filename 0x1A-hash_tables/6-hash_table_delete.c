#include "hash_tables.h"

/**
 * hash_table_delete - function to delete a hash table.
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *newnode, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			newnode = ht->array[i];

			while (node != NULL)
			{
				temp = newnode->next;
				free(newnode->key);
				free(newnode->value);
				free(newnode);
				newnode = temp;
			}
		}
	}
	free(head->array);

	free(head);
}
