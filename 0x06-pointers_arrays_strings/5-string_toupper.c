#include "main.h"

/**
 * string_toupper - change lower case string to upper case
 * @s: string to capitalize
 * Return: a pointer to char
 */

char *string_toupper(char *s)
{
	int i = 0;

	while ( s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
