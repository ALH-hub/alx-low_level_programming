#include "hash_tables.h"

/**
 * hash_table_set - inset an item into hash table
 * @ht: the hash table concerned
 * @key: the key of the item
 * @value: the value of the item
 * Return: 1 if succeded 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *node, *current;

	if (key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
