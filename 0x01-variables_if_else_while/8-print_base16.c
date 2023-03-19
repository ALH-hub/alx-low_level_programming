#include <stdio.h>

/**
 * main - Entry point
 * Description: print base 16 digits
 * Return: always 0
 */

int main(void)
{
	int b_10 = 48;
	int ch = 'a';

	while (b_10 <= 57)
	{
		putchar(b_10);
		b_10++;
	}

	while (ch <= 102)
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
