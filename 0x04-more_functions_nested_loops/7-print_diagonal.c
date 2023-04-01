#include "main.h"

/**
 * print_diagonal - print lines diagonally
 * @n: number of lines to be printed
 * Return: always 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (j == i - 1)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar(' ');
			_putchar('\n');
		}
}
