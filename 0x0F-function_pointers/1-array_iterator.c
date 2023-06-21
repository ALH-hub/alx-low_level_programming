#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of an array
 * @array: the array containint the elements
 * @size: the size of the array
 * @action: the function to operate on the elements of the array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
