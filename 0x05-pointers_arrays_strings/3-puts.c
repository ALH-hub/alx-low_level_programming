#include "main.h"

/**
 * _puts - print a given string to the stdout
 * @str: string to print
 * return: void
 */

void _puts(char *str)
{
	int ch = 0;

	while (str[ch] != '\0')
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');
}
