#include <stdio.h>

/**
 * main - Entry point
 * Description: print all single digit numbers of base 10
 * Return: always 0
 */

int main(void)
{
	int base_10 = 0;

	while (base_10 < 10)
	{
		printf("%d", base_10);
		base_10++;
	}
	return (0);
}
