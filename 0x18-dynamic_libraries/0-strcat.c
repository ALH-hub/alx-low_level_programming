#include "main.h"

/**
 * _strcat - concatenate two statements
 * @dest: recepient of the output
 * @src: the string to concatenate to dest
 * Return: character pointer
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, i = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0')
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	return (dest);
}
