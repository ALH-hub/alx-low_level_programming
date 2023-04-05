#include "main.h"
int ch = 0;

/**
 * _puts_recursion - print the characters of a string
 * @s: the string to print
 * Return: void
 */

void _puts_recursion(char *s)
{

	if (s[ch] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[ch]);
	ch++;
	_puts_recursion(s);
}
