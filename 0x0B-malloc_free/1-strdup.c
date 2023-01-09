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
	unsigned int i = 0, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	ptr = (char *) malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
