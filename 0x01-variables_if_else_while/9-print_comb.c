#include <stdio.h>

/**
 * main - Entry point
 * Description: print possible single digit combination separated by commas
 * Return: always 0
 */

int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		if (digit < 57)
		{
			putchar(44);
			putchar(32);
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
