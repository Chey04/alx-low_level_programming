#include "main.h"

/**
 * _memcpy - function to copy memory area
 *
 * @dest: destinantion of copied memory
 *
 * @src: source of copied memory
 *
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
