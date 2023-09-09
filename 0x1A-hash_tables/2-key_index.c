#include "hash_tables.h"

/**
 * key_index - find the index of a key
 * @key: the key provided
 * @size: size of the array
 * Return: index at which the key is stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
