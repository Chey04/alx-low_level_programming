#include "hash_tables.h"

/**
 * hash_table_create - fucntion to create a new hash table
 * @size: this is how big the hash table will be
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned long int i;

	newTable = malloc(sizeof(hash_table_t));

	if (newTable == NULL)
		return (NULL);

	newTable->size = size;
	newTable->array = malloc(sizeof(hash_node_t *) * size);
	if (newTable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		newTable->array[i] = NULL;
	}

	return (newTable);
}
