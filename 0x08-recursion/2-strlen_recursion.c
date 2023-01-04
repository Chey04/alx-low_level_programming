#include "main.h"

/**
 * _strlen_recursion - function to return lenght of string
 *
 *@s: string to count
 *
 * Return: 0 or 1;
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
