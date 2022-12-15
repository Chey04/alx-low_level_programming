#include "main.h"

/**
 * print_most_numbers - prints out numbers from 0 - 9
 * except 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else if
			_putchar(i);
		_putchar('\n');
	}

}
