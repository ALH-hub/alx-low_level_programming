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
	char *dupstr, *dupkey;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	dupstr = strdup(value);
	dupkey = strdup(key);
	if (dupstr == NULL || dupkey == NULL)
		return (0);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = dupstr;
			return (1);
		}
		current = current->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = dupkey;
	node->value = dupstr;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
