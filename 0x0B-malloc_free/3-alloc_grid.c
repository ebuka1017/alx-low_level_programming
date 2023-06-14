#include "main.h"
#include <stdlib.h>

#ifndef SIZE_MAX
#define SIZE_MAX ((size_t) - 1)
#endif>

/**
 * alloc_grid - returns pointer to a 2d grid
 * @width: width
 * @height: height
 *
 * Return: NULL on failure or if width or height is negative
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}



