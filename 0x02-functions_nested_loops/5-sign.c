#include "main.h"

/**
 * print_sign - print the sign of an integer
 * @n: integer to process
 * Return: 0 if null integer, 1 if +ve and -1 if -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else
	{
		if (n < 0)
		{
			return (-1);
		}
		else
			return (0);
	}
}
