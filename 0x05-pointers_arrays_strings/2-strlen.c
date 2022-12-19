#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string address
 * Return: 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		return (i);

	return (0);

}
