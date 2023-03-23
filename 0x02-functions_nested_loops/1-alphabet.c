#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: print lowercase alphabet function
 * Return: on succces 1
 */

void print_alphabet(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
