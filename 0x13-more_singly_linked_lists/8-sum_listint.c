#include "lists.h"

/**
 * sum_listint - sum the values of the entire list
 * @head: the head of the list
 * Return: the sum of the entire list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
