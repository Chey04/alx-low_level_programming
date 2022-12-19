#include "main.h"

/**
 * -puts - outputs a string followed by new line
 *  to stdout
 *  @str: addredd of str to be output
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		_putchar('\n');
}
