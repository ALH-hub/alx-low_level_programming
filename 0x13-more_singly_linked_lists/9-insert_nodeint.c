#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index in a list
 * @head: the head of the list
 * @idx: index at which the new node should be added
 * @n: The value of the new node
 * Return: NULL if fails otherwise address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int count;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
