#include "hash_tables.h"

/**
 * key_index - function to assign index to hash key
 * @key: key to whom an index would be assigned
 * @size: size of array of hash table
 * Return: index value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return(hash_djb2(key) % size);
}
