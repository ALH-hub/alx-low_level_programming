#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an index
 * @array: the array to find the index
 * @cmp: the function to compare the elements
 * @size: the size of the array
 * Return: index if found, 0 if no element and -1 if no element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (0);
}
