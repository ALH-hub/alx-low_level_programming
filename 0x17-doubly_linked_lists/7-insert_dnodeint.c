#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given index
 * @h: the head of the dlist
 * @idx: index where new node is inserted
 * @n: the value of the new node
 *
 * Return: address of new node, NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, 
		unsigned int idx, int n)
{
	dlistint_t *list, *tmp;
	unsigned int count = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	list = *h;
	while (list)
	{
		if (count == idx - 1)
		{
			new->n = n;
			tmp = list->next;
			new->next = tmp;
			new->prev = list;
			list->next = new;
			tmp->prev = new;
			return (new);
		}
		count++;
		list = list->next;
	}

	return (NULL);
}
