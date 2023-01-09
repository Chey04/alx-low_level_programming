#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initializes with a specific char
 * @size: array size
 * @c: char used to initialize
 * Return: NULL or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == '\0')
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	for (i = 0; i <= size i++)
	{
		*ptr[i] = c;
	}

	return (ptr);
}
