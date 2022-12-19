#include "main.h"

/**
 * rev_string - reverses string input
 * @s: input to be reversed
 */

void rev_string(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; ++i)
		;
	
	for (--i; i >= 0; --i)
		_putchar(s[i]);
	_putchar('\n');

}
