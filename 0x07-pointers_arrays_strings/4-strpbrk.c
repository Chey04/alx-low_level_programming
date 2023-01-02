#include "main.h"

/**
 * strpbrk - function that searches a string
 * for a set of bytes
 *
 * @s: pointer to string
 *
 * @accept: pointer to characters
 *
 * Return: pointer of matching s and accept byts or NULL
 * otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i - 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
