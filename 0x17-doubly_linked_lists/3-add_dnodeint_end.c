#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistintt
 * @head: head of the dlist
 * @n: val to be inserted in new node
 *
 * Return: address of new element or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *current;

    current = (*head);

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;
    new->prev = NULL;

    if ((*head) == NULL)
        (*head) = new;
    else
    {
        while (current->next)
            current = current->next;

        current->next = new;
	new->prev = current;
    }

    return (new);
}
