#include "main.h"

/**
 * more_numbers - Entry point
 * Description: print more numbers
 * Return: always 0
 */

void more_numbers(void)
{
	int ch = 48;
	int i = 1;

	while (i <= 10)
	{
		ch = 48;
		print_numbers();

		while (ch <= 52)
		{
			_putchar(49);
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
