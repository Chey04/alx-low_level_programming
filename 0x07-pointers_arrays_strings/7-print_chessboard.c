#include "main.h"

/**
 * print_chessboard - prints out a chessboard
 *
 * @a: pointer to values to print
 *
 * Return: void
 */

void print_chessboard(char (*a) [8])
{
	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
			_putchar (a[i][j]);
	}
		_putchar ('\n');
}
