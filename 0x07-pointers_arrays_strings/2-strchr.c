#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to string
 *
 * @c: character to be found
 *
 * Return: pointer to first occurrence of c
 */

char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

	if (*s == c)
		return (s);
	return ('\0');
}
