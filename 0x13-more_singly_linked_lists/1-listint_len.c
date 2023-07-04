#include "lists.h"

/**
 * listint_len - the length of a linked list
 * @h: the linked list
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
