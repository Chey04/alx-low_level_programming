#include "hash_tables.h"

/**
 * hash_table_get - function to retrieve value associated
 *			with key in hash table
 * @ht: hash table
 * @key: key
 * Return: key value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *newnode;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	newnode = ht->array[index];

	while (newnode && strcmp(newnode->key, key) != 0)
	{
		newnode = newnode->next;
	}

	if (newnode == NULL)
		return (NULL);
	return (newnode->value);

}
