#include "hash_tables.h"

/**
 * hash_table_set - function to add an element to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 for success or 0 for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int i, index;
	char *copy_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_value = strdup(value);

	if (copy_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_value;
			return (1);
		}
	}
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
	{
		free(copy_value);
		return (0);
	}
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}

	item->value = copy_value;
	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}
