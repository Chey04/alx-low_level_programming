#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: where substring is to be found
 *
 * @needle: substring to be found
 *
 * Return: pointer to beginning of substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);

		haystack++;
	}

	return ('\0');
}
