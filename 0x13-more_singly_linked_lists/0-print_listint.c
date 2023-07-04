#include "lists.h"
#include <stdio.h>

/**
 * print_list - print the elements of a linked list
 * @h: the head of the list
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);

}
