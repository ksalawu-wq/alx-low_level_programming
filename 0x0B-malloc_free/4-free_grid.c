#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees space
* @grid: input
* @height: input
*/

void free_grid(int **grid, int height)
{
	int b;

	if (grid != NULL)
	{
	for (b = 0; b < height; b++)
	{
	if (grid[b] != NULL)
		{
		free(grid[b]);
		}
	}
free(grid);
}

}
