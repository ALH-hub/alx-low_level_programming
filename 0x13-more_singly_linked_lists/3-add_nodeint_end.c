#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the list
 * @head: the head of the list
 * @n: the value of a cell
 * Return: the address of the new node on succes or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
