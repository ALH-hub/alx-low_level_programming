#include "main.h"

/**
 * print_line - print lines n times
 * @n: the number of lines to be printed
 * Return: always 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		;
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
