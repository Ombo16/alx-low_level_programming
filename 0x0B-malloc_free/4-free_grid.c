#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - the function prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
