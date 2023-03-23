#include "main.h"

/**
 * _isdigit - entry point
 * Description: check digit
 * @c: character to be checked
 * Return: 0 if false and 1 if true
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
