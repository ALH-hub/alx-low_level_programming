#include "search_algos.h"

/**
 * linear_search - implementation of linear search algo
 * @array: array to perform search on
 * @size: the size of the array
 * @value: the value to search in the array
 * Return: index of value if succeded -1 otherwise
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return ((int) i);
	}
	
	return (-1);
}
