#include "lists.h"
#include <stdio.h>

int _strlen(char *str);

/**
 * print_list - print the elements of a linked list
 * @h: the head of the list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	int len = 0;
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			len = _strlen(h->str);
			printf("[%d] %s\n", len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		n++;
		h = h->next;
	}
	return (n);
}


/**
 * _strlen - string length of a string
 * @str: the string concerned
 * Return: the string length
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
