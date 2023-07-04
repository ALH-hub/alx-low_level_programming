#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
    int n;
    struct list_s *next;
} list_t;

size_t print_listint(const list_t *h);
size_t listint_len(const list_t *h);
list_t *add_nodeint(list_t **head, const char *str);
list_t *add_nodeint_end(list_t **head, const char *str);
void free_listint(list_t *head);
int _putchar(char c);

#endif
