#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - alocates grid space
* @width: input
* @height: input
* Return: grid
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
	{
	grid[a] = malloc(width * sizeof(int));
	if (grid[a] == NULL)
	{
	for (b = 0; b < a; b++)
	free(grid[b]);
	free(grid);
	return (NULL);
	}
	}
return (grid);
}
