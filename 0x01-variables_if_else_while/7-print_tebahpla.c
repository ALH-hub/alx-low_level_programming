#include <stdio.h>

/**
 * main - Entry point
 * Description: print lowercase alphabet in reverse order
 * Return: always 0
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
