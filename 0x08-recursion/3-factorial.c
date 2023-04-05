#include "main.h"

/**
 * factorial - factorial of a number
 * @n: the number to find the fact
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
