#include <stdlib.h>
#include "main.h"

/**
 * array_range - array of a range of integers
 * @min: the start of the range
 * @max: the end of the range
 * Return: address on success and NULL on failure
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min < max)
		return (NULL);

	size = max - min + 2;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
