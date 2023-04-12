#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * _strdup - duplicate a string withe the help of a buffer
 * @str: the string to duplicate
 * Return: a pointer to the duplicated string or NULL if failed
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j;
	char *sdup;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	sdup = malloc(sizeof(char) * i);
	if (sdup == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		sdup[j] = str[j];
	}
	return (sdup);
}

