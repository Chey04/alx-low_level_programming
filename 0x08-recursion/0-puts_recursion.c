#include "main.h"

/**
 * _puts_recursion - recursive function to print
 * a string followed by a new line
 *
 * @s: string to be printed out
 */

void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		_putchar('\0' + '\n');
	}

	_putchar(s[0] + _puts_recursion(char s + 1);
}
