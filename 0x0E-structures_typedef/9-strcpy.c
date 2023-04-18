#include "main.h"

/**
 * _strcpy - copies a string to another
 * @src: the source string
 * @dest: the buffer to contain the copied string
 * Return: a pointer of type char to the buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
