#include "main.h"
#include <stdio.h>
#include <stdlib.h>



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
