#include "main.h"

/**
 * puts2 - print other characters of a string
 * @str: string to be processed
 * return: void
 */

void puts2(char *str)
{
	int len = 0;
	int i = 1, j;

	while (str[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		if (i % 2 != 0)
		{
			_putchar(str[j]);
		}
		i++;
	}
	_putchar('\n');
}
