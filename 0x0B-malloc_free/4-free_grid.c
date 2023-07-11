#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL)
		free(grid);

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
