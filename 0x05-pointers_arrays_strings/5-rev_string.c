#include "main.h"

/**
 * rev_string - reverses string input
 * @s: input to be reversed
 */

void rev_string(char *s)
{
	int i, l;
	char me;

	for (l = 0; s[l] != '\0'; ++l)
		;

	for (i = 0; i < l / 2; ++l)
	{
		me = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = me;
	}
}
