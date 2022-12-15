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

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
