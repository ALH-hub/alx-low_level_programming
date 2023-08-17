#include "lists.h"

/**
 * dlistint_len - count the nodes of a doubly linked list
 * @h: the head of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *list;

	list = h;
	while (list)
	{
		list = list->next;
		size++;
	}

	return (size);
}
