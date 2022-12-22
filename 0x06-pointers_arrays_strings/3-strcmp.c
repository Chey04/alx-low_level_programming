#include "main.h"

/**
 * _strcmp - compares two strings and outpus
 * an int
 * @s1: first string
 * @s2: second string
 * Return: should be integer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;


		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
