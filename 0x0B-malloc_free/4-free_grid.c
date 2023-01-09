#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free grid memory
 * @grid: location of memory to free
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
