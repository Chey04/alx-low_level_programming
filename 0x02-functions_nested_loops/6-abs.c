#include "main.h"
/**
 * _abs - prints out absolute values
 * of given integer
 *
 * Return: always 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		_putchar(i);

	}
	else
	{
		_putchar(i);
	}

	return (0);

}
