#include "main.h"

/**
 * more_numbers - Entry point
 * Description: print more numbers
 * Return: always 0
 */

void more_numbers(void)
{
	int num;
	int ch;
	int i = 1;

	while (i <= 10)
	{
		num = 12596;
		ch = 48;
		while (ch <= 57)
		{
			_putchar(ch);
			ch++;
		}
		while (num <= 12596)
		{
			_putchar(num);
			num++;
		}
		i++;
		_putchar('\n');
	}
}
