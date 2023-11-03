#include "hash_tables.h"

/**
 * hash_table_create - create an empty hash table
 * @size - size of the hash table
 * Return: a pointer to the hash table
 */

hash_table_t* hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_node_t** node;

	hash_table_t* hash_table = malloc(sizeof(hash_table_t));
	
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;

	node = calloc(hash_table->size, sizeof(hash_node_t*));
	
	if (node == NULL)
		return (NULL);
	for (i = 0; i < hash_table->size; i++)
		node[i] = NULL;
	hash_table->array = node;

	return (hash_table);
}

	

