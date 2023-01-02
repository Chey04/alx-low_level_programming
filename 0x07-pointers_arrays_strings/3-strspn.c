#include "main.h"

/**
 * _strspn - function to get the lenght of a
 * prefix substring
 *
 * @s: pointer to string
 *
 * @accept: pointer to characters
 *
 * Return: number of bytes that exists both in
 * s and accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int b;


	for (i = 0; s[i] != '\0'; i++)
	{
		b = 1;

		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				b = 0;
				break;
			}
		}
	

		if (b == 1)
		{
			break;
		}
	}
	return (i);
}
