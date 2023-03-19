#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabets except e and q
 * Return: always 0;
 */

int main(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
