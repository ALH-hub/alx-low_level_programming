#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - check the memory allocation
 * @b: size of the memory to be allocated
 * Return: pointer to address on success and 98 if failed
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
