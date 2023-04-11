#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * create_array - creating an array of characters and initialize it
 * @size : the size of the array
 * @c: the character to initialize the array with.
 * Return: a character pointer if succes, NULL pointer of failed
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (str);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
