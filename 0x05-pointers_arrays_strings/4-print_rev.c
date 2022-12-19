#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: location of string to be reversed
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;

	for (--i; i >= 0; --i)
		_putchar(s[i]);
	_putchar('\n');
}
