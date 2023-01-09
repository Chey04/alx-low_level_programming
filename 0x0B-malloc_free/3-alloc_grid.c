#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to two dimensional array
 * @width: var1
 * @height: var2
 * Return: NULL or pointer
 */

int **alloc_grid(int width, int height)
{
	int a, i, j, *ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int *) malloc(sizeof(int) * (width * height));

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			a[w][h] = 0;
	}

	*ptr = a[w][h];

	if (ptr == NULL)
		return (NULL);
	return(ptr);
}
