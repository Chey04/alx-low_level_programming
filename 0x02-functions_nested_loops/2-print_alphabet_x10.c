#include "main.h"

/**
 * print_alphabet_x10 - prints out
 * lowercase alphabets 10 times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	_putchar('\n');
	}

}
