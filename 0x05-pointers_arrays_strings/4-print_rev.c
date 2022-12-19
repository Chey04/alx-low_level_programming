#include "main.c"

/**
 * print_rev - prints the reverse of a string
 * @s: location of string to be reversed
 */

void print_rev(char *s)
{
	int i, count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);

	for (j = count; s[count] >= s[0]; j--)
	{
		_putchar(j);

	}
	_putchar('\n');
}
