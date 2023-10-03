#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - the function returns a pointer
 * to a 2 dimensional array of int
 * @width: type int width.
 * @height: type int height.
 * Return: Null if 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = (int *)malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(grid[b]);
			}
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		grid[a][b] = 0;
	}

	return (grid);
}
