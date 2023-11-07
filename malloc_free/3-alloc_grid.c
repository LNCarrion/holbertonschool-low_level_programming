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
	int col, row;
	int **doublePtr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	doublePtr = malloc(height * sizeof(int *));

	if (doublePtr == NULL)
	{
		return (NULL);
	}

	for (col = 0; col < height; col++)
	{
		doublePtr[col] = malloc(width * sizeof(int));

		if (doublePtr[col] == NULL)
		{
			for (row = 0; row < col; row++)
				free(doublePtr[row]);

			free(doublePtr);
			return (NULL);
		}

		for (row = 0; row < width; row++)
		{
			doublePtr[col][row] = 0;
		}
	}
		return (doublePtr);
}
