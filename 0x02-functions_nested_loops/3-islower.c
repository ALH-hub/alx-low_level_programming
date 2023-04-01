#include "main.h"

/**
 * _islower - verify the case of a character
 * @c: the character to verigy
 * Return: 1 if succes and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
