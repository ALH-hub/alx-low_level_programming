#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * Description: creates a new hash table and return a pointer to it
 * @size: the size of the array
 * Return: pointer to new hash table NULL otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!hs)
		return (NULL);
	hs->size = size;

	hs->array = malloc(sizeof(hash_node_t) * size);
	if (hs->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		hs->array[i] = NULL;
	}
	return (hs);
}
