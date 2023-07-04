#include "lists.h"

/**
 * pop_listint - Delete the head node of a linked list.
 * @head: the head of the list
 * Return: 0 if list is empty and value of the head node if not
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (*head == NULL)
		return (0);

	temp = *head;
	val = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (val);
}
