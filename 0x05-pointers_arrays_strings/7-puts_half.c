#include "main.h"

/**
 * puts_half - print half of a string
 * @str: the sring to be processed
 * return: void
 */

void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
