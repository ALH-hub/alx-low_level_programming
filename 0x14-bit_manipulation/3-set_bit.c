#include "main.h"

/**
 * set_bit - invert the bit at a particular position
 * @n: the number concerned
 * @index: the index of the bit to invert
 * Return: 1 on success and -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
