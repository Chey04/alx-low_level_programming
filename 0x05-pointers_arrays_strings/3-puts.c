#include "main.h"

/**
 * -puts - outputs a string followed by new line
 *  to stdout
 *  @str: addredd of str to be output
 */

void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}

		_putchar(str[i]);
	}

}
