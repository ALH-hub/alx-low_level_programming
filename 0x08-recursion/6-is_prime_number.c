#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - returns if a number is prime
 * @n: the number to be verified
 * Return: integer val
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if a num is prime or not
 * @n: the num concerned
 * @i: iteration times
 * Return: 1 if prime and 0 otherwise
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
