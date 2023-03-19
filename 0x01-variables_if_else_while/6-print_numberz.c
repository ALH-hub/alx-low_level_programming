#include <stdio.h>

/**
 * main - Entry point
 * Description: print single digit numbers of base 10 using putchar
 * Return: always 0
 */

int main(void)
{
	int b_10 = 48;

	while (b_10 <= 57)
	{
		putchar(b_10);
		b_10++;
	}

	return (0);
}
