#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate a memory for an array
 * @nmemb: number of members in the array
 * @size: the size of each member
 * Return: a pointer to the memory allocation or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *init;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	init = ptr;

	for (i = 0; i < nmemb; i++)
		init[i] = '\0';

	return (ptr);
}
