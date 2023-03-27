#include <stdio.h>
#include "main.h"

/**
 * print_array - print enlements of an array
 * @a: the array's name
 * @n: the size of the array
 * return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
