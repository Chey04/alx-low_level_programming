#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings until n bytes
 * @s1: dest string
 * @s2: src string
 * @n: number of bytes
 * Return: pointer or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = '';

	for (i = 0; s1[i] != '\0'; i++)
		count++;

	for (i = 0; i < n; i++)
		s1[count + i] = s2[i];

	ptr = malloc(sizeof(ptr) * (count + n));

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
