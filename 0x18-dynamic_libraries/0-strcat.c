#include "main.h"

/**
 * _strcat - is a function that concatenates two strings
 * @dest: the destination where full combination is located
 * @src: location of other half string
 * Return: Full concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
		;

	for (j = 0; src[j] != 0; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
