#include "lists.h"
#include <string.h>

/**
 * add_node - add a node to a linked list
 * @head: the head of the linked list
 * @str: the string value of the new node
 * Return: the address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	unsigned int len = 0;
	char *dup;

	if (new == NULL)
		return (NULL);

	dup = strdup(str);

	if(dup == NULL)
	{
		free(new);
		return (NULL);
	}

	while(str[len] != '\0')
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;

	free(dup);
	return(new);
}


