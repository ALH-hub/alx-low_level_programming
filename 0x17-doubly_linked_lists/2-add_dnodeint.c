#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of the dlistint
 * @head: the head of the list
 * @n: the value of the new node
 *
 * Return: address of the new element
 *	NULL if failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if ((*head) == NULL)
		(*head) = new;
	else
	{
		(*head)->prev = new;
		new->next = (*head);
		new->prev = NULL;
		(*head) = new;
	}

	return (new);
}
