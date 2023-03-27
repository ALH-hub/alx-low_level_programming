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

	if (len % 2 == 0)
	{
		for (i = len/2; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len-1)/2; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
