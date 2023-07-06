#include "main.h"

/**
 * clear_bit - set the bit at a given index to 0
 * @n: the number concerned
 * @index: the index of the bit required
 * Return: 1 on succes and -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
