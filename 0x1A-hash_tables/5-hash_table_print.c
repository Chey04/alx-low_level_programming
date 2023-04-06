#include <hash_tables.h>

/**
 * hash_table_print - function to print out all contents
 * 			of a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *newnode;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
		return (NULL);

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
		}
		newnode = ht->array[i];

		while (node != NULL)
		{
			printf("'%s' : '%s'", node->key, node->value);
			newnode = newnode->next;
			if (newnode != NULL)
				printf(", ");
		}
		flag = 1;
	}
	printf("}\n");


}
