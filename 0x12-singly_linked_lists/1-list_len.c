#include "lists.h"

/**
 * list_len - the length of a linked list
 * @h: the linked list
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	if (h == NULL)
		return (len);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
