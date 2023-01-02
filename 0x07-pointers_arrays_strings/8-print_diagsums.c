#include "main.h"

/**
 * print_diagsums - print the sum of two diagonals
 * of a square matrics
 *
 * @a: string pointer
 *
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	s1 = s2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			s1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			s2 += a[i];
	}

	printf("%d, %d\n", s1, s2);
}
