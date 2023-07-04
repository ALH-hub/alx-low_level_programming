#include "lists.h"

/**
 * free_listint2 - free the list and setting head to NULL
 * @head: the head of the list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head, *temp2;

	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	*head = NULL;
}
