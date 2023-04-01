#include "main.h"

/**
 * print_alphabet_x10 - print alphabets ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int ch = 97;

	for (i = 1; i <= 10; i++)
	{
		ch = 97;
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
