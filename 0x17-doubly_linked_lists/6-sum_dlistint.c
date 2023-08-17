#include "lists.h"

/**
 * sum_dlistint - sum the data on the dlistint
 * @head: the head of the list
 *
 * Return: the sum or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *list;

	if (head == NULL)
		return (0);

	list = head;
	while (list)
	{
		sum += list->n;
		list = list->next;
	}
	return (sum);
}
