#include "main.h"

/**
 * _strncpy - copies a string from src to dest
 * @dest: location of new copy
 * @src: location to string to be copied
 * @n: number of values to copy
 * Return: copied value
 */

char *_strncpy(char *dest, char *src, int n)
{
	if (dest == NULL)
		return (NULL);

	char *ptr = dest;

	while (src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}
