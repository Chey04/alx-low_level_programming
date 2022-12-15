#include "main.h"

/**
 * more_numbers - prints out 10 rows
 * of 0 - 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
