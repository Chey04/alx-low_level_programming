#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array elements
 * @size: size of memory
 * Return: pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i <= nmemb; i++)
	{
		ptr[i] = malloc(sizeof(ptr) * size);
		*ptr = 0;
	}

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
