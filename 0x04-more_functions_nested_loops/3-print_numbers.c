#include "main.h"

/**
 * print_numbers - Entry point
 * Description: print numbers from 0 to 9
 * return: always 1
 */

void print_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
