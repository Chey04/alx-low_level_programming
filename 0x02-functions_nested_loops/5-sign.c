#include "main.h"

/**
 * print_sign - prints out the sign of a
 * given number
 *
 * @n: variable to be checked
 *
 * Return: 0 if sucessful, non zero otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
