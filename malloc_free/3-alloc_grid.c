#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a 2-dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated 2-dimensional array, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (0);

	grid = (int **)malloc(sizeof(int) * height);

	if (grid == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (0);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
