#include "main.h"

/**
 * swap_int - swap variables using a pointer
 * @a: one pointer
 * @b: second pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a  = *b;
	*b = temp;
}
