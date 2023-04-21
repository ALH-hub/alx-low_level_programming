#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers entered as paramenters
 * @separator: character to separate the numbers
 * @n: the number of elemetns to print
 * Description: print numbers entered as paramenter to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(var, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(var);
}
