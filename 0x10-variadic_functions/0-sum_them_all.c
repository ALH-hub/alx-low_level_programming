#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum argumnts of a funtction
 * @n: the number of argumetns to check later
 * @...: the argments to the functions
 * Description: sum the arguments to a function
 * Return: sum of all the integer arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list var;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(var, int);
	}
	return (sum);
}
