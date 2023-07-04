#include "lists.h"
#include <string.h>

/**
 * add_nodeint - add a node to a linked list
 * @head: the head of the linked list
 * @n: the number to add
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
