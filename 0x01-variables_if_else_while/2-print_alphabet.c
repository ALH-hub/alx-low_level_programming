#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabet characters
 * Return: always 0;
 */

int main(void)
{
	int ch;
	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
