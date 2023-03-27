#include "main.h"

/**
 * _strlen - return string length of a string
 * @s: the string to find the length
 * Return: the string lenth
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
