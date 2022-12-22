#include "main.h"

/**
 * string_toupper - changes a string to uppercase
 * Return: the uppercase string
 */

char *string_toupper(char *)
{
	for (; *s; s++)
	{
		if (('a' <= *s) && (*s <= 'z'))
			return (*s = 'A' + (*s - 'a'));
		else
			return (*s);
	}
}
