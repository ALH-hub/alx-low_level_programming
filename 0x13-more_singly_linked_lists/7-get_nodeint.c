#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node in a linked list
 * @head: the head  of the list
 * @index: The index of the node to find
 * Return: NULL if node doesn't exit, otherwise, the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
	}

	return (temp);
}
