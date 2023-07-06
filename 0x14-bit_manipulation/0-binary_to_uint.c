#include "main.h"

/**
 * binary_to_uint - convert from binary to unsigned integer
 * @b: the binary number to convert
 * Return: converted number on success or NULL on failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, pow = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * pow;
		pow *= 2;
	}

	return (num);
}
