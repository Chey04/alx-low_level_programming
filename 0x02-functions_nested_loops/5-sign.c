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
	if (n > 0) {
		return (1);
		_putchar(43);

	}
	else if (n < 0) {
		return (-1);
		_putchar(45);
	}
	else {
		return ('0');
		_putchar(0);
	}

	return (0);

}
