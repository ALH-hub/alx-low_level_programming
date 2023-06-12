#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: tcohe first string
 * @s2: the second string to be concatenated
 * Return: concatenated string on success and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len, k = 0;
	char *str;

	if (s2 == NULL && s1 != NULL)
	{
		str = malloc(sizeof(char) * (strlen(s1) + 1));
		if (str == NULL)
			return (NULL);
		for (i = 0; i < strlen(s1); i++)
			str[i] = s1[i];
		return (str);
	}
	if (s1 == NULL && s2 != NULL)
	{
		str = malloc(sizeof(char) * (strlen(s2) + 1));
		if (str == NULL)
			return (NULL);
		for (j = 0; j < strlen(s2); j++)
			str[j] = s2[j];
		return (str);
	}
	if (s1 == NULL && s2 == NULL)
	{
		str = malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * ((strlen(s1) + strlen(s2)) + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		str[i] = s1[i];
	for (j = i; j < (strlen(s1) + strlen(s2)); j++)
	{
		str[j] = s2[k];
		k++;
	}
	return (str);
}
