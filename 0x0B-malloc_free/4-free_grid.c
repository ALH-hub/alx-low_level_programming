#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free an allocated grid
 * @grid: the grid to free
 * @height: the height of the grid to free
 * Return: nothin
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
