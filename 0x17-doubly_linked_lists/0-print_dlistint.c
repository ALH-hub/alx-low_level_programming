#include "lists.h"

/**
 * print_dlistint - print the elements of a doubly linked list
 * @h: the head of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *list;

	list = h;
	while (list)
	{
		printf("%i\n", list->n);
		list = list->next;
		size++;
	}

	return (size);
}
