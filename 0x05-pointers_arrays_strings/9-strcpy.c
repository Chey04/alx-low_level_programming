#include "main.h"

/**
 * _strcpy - copies string from one pointer destination to another
 * including null byte
 *
 * @src: from this source
 * @dest: to this destination
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
