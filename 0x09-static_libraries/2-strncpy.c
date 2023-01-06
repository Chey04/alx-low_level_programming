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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
