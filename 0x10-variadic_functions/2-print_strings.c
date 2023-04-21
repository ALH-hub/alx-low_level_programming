#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings fromt the functions's parameter
 * @separator: string to separate the characters
 * @n: number of strings to print
 * Description: print strings from the functions's parameter
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list var;
	char *str;

	va_start(var, n);
	str = va_arg(var, char*);

	for (i = 0; i < n; i++)
	{
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
			printf("(nil)");
		str = va_arg(var, char*);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(var);
}
