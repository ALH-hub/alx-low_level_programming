#include "main.h"

/**
 * get_bit - return the bit at a given index
 * @n: the number concerned
 * @index: the index of the bit required
 * Return: the bit on success or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
