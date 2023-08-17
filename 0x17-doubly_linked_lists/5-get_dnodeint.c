#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at a given index
 * @head: the head of the dlist
 * @index: the index of node to be found
 *
 * Return: nth node, NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list = head;
	unsigned int count = 0;

	while (list)
	{
		if (count == index)
			return (list);
		count++;
		list = list->next;
	}

	return (NULL);
}
