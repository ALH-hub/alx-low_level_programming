#include "main.h"

/**
 * _puts_recursion - print the characters of a string
 * @s: the string to print
 * Return: void
 */


void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
