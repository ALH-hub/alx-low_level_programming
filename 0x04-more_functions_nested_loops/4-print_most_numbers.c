#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: print numbers except 2 and 4
 * Return: always 1 succeeded
 */

void print_most_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		if (num == 50 || num == 52);
		else
			_putchar(num);
		num++;
	}
	_putchar('\n');
}
