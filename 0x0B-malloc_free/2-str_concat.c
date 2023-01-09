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
	int i, len;
	char *ptr, str[];



	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}

	for (len = 0; s1[len]; len++)
		str[len] = s1[len];

	len++;

	for (i = 0; s2[i]; i++)
	{
		str[len] = s2[i];
		len++;
	}

	ptr = (char *) malloc(sizeof(char) * (i+len));

	*ptr = str;

	if (ptr == NULL)
		return (NULL);
	return (ptr);




}
