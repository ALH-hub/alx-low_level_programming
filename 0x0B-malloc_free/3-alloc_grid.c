#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * alloc_grid - two dimensional arry of integers width memory allocations
 * @width: width of array
 * @height: height of array
 * Return: pointer to array onsucces, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
