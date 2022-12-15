#include "main.h"

/**
 * print_triangle - prints out a triangle
 *
 * @size: is the size of the shape
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((i + j) <= size)
					_putchar(35);
				else
					_putchar(42);
			}
		}
	}

}
