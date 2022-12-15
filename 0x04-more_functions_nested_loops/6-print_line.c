#include "main.h"

/**
 * print_line - prints '-' n number of times
 *
 * @n: number of times to be printed
 *
 * Return: 0
 */

void print_line(int n)
{


	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{	
		int m;

		for ( m = 0; m <= n; m++)
		{
			_putchar('_');
		}


		_putchar('\n');
		
	}

}
