#include "main.h"

/**
 * _strncat - concatenates two strings until n number
 * @dest: the destination of both strings
 * @src: the string to be joined
 * @n: the number of src string to add to dest string
 * Return: the value of dest string
 */

char _strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
