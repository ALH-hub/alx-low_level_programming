#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at an index in a dlist
 * @head: head of the list
 * @index: the index of the node
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head,
		unsigned int index)
{
	dlistint_t *list = (*head);

	if ((*head) == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (list == NULL)
			return (-1);
		list = list->next;
	}

	if (list == (*head))
	{
		(*head) = list->next;
		if ((*head) != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		list->prev->next = list->next;
		if (list->next != NULL)
			list->next->prev = list->prev;
	}

	free(list);
	return (1);
}
