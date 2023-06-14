#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D grid created by func alloc_grid
 *
 * @grid: pointer
 * @height: height
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

