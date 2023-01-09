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
	int **ptr;
	int i, j

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **) malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int **) malloc(sizeof(int *) * width);
		if (ptr[i] == NULL)
		{
			free(ptr);
			for (j = 0; j <= i; j++)
				free(ptr[j]);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
			ptr[i][j] =  0;
	}



	if (ptr == NULL)
		return (NULL);
	return(ptr);
}
