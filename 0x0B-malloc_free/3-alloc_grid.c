#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL if fails, pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x;
	int y;

	if (width <= 0 || height <= 0) /* validate input */
		return (NULL);

	grid = malloc(height * sizeof(int *)); /* alloctae memory for height */

	if (grid == NULL) /* validate memory */
		return (NULL);

	for (x = 0; x < height; x++) /* allocate memory for columns of each row */
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)/* validate memory */
		{
			for (x = 0; x < height; x++)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}



