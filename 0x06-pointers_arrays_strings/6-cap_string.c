#include "main.h"

/**
 * cap_string - capitalize strings with symbols
 * @s: a string to capitalize
 * Return: char pointer
 */

char *cap_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
		i++;
	for (j = 0; j <= i; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			s[j] = s[j] - 32;
		}
	}
	return (s);
}
