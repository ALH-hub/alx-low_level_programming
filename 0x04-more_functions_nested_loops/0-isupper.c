#include "main.h"

/**
 * _isupper - Entery point
 * Description: check if a character is upper case or not
 * @c: the character to test
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
