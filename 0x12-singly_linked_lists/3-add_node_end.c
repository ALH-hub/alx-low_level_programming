#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a node at the end of the list
 * @head: the head of the list
 * @str: the string value of the new node
 * Return: the address of the new node on succes or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	unsigned int len = 0;
	char *dup;

	list_t *last = *head;
	
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new->str = dup;
	new->len = len;
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
