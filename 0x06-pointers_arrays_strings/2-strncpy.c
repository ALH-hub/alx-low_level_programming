#include "main.h"

/**
 * _strncpy - copy a string to n number of bytes
 * @dest: recepient of the output
 * @src: the string to copy dest
 * @n: number of bytes to copy
 * Return: character pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
