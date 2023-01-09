#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to return pointer to new
 * memory space that contains copy of str
 *
 * @str: string to be duplicated
 *
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int size = 1024;

	if (str == NULL)
		return (NULL);
	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);
	*ptr = *str;

	return (ptr);
}
