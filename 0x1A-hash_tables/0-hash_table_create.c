#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 * Returns: pointer to new hash table NULL otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs = malloc(sizeof(hash_table_t));
	unsigned long int i, j;

	if (!hs)
		return (NULL);
	hs->size = size;
	hs->array = malloc(sizeof(hash_node_t) * size);
	if (hs->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		hs->array[i] = malloc(sizeof(hash_node_t));
		if (hs->array[i] == NULL)
		{
			for (j = i; j <= 0; j--)
				free(hs->array[j]);
			free(hs);
			return (NULL);
		}
	}
	return (hs);
}
