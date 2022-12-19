#include "main.h"

/**
 * puts_half - fucntion to print second half
 * of a string
 * @str: value address
 */

void puts_half(char *str)
{
	int i, j, half = 0;

	for (i = 0; str[i] != '\0'; ++i)
		;

	if (i % 2 == 0)
	{
		for (j = i; str[j] != '\0'; ++j)
		_putchar(str[j]);
	}
	else
	{
		for (j = ((i - 1) / 2) + 1; str[j] != '\0'; ++j)
			_putchar(str[j]);
	}

	_putchar('\n');
}
