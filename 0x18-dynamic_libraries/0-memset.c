#include "main.h"

/**
 * _memset - a function to fill memory
 * with a constant byte
 *
 * @s: pointer to memory area to be filled
 *
 * @b: char used to fill
 *
 * @n: n amount of bytes to be filled
 *
 * Return: pointer to filled memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
