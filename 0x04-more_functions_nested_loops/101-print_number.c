#include "main.h"

/**
 * print_number - prints out a number
 *
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}

	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n % 10) + '0');


}
