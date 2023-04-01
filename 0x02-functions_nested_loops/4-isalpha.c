#include "main.h"


/**
 * _isalpha - verify an alphabet character
 * @c: character to verify
 * Return: 1 if succes and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
