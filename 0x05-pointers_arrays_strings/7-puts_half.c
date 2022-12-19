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
		half = i / 2;
	else
		half = (i - 1) / 2;

	for (j = half; str[j] <= str[i]; j++)
		_putchar(str[j]);
	_putchar('\n');
}
