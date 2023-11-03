#include "hash_tables.h"

/**
 * hash_table_get - get a value associated with the key provided
 * @ht: the hash table concerned
 * @key: the key looking for
 * Return: the pointer to the value corresponding NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
