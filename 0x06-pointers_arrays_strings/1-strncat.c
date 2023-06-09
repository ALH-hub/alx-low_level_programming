#include "main.h"

/**
 * _strncat - concatenate two statements with n number of bytes
 * @dest: recepient of the output
 * @src: the string to concatenate to dest
 * @n: number of bytes to concatenate
 * Return: character pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, i = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	return (dest);
}
