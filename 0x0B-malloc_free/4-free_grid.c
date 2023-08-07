#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 *
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int p;

	for (p = 0; p < height; p++)
	{
		free(grid[p]);
	}
	free(grid);
}
