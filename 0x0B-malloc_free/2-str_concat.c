#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenate two strings
 * @s1: location of string 1
 * @s2: location of string 2
 * Return: NULL or pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *ptr;

	len1 = len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;


	ptr = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0; i < len1; i++)
		{
			ptr[i] = s1[i];
		}
	}

	if (s2)
	{
		for (j = 0; i < (len1 + len2); j++, i++)
			ptr[i] = s2[j];
	}

	ptr[i] = '\0';

	return (ptr);




}
