#include "main.h"

/**
 * cap_string - capitalize strings with symbols
 * @s: a string to capitalize
 * Return: char pointer
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;
		if (s[ - i] == '\t' || s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || i == 0)
			s[i] -= 32;
		i++;
	}
	return (s);
}
