#include "search_algos.h"

int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t h);

/**
 * binary_search - implementing binary search algorithm
 * @array: the array to operate on
 * @size: the size of the array
 * @value: the value to search for
 * Return: index if value found -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}


/**
 * print_array - print the elements of an array
 * @array: the array to print
 * @l: the lower index
 * @h: the higher index
 * Return: nothing
 */

void print_array(int *array, size_t l, size_t h)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i < h; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}
