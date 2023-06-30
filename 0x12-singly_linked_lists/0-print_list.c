#include "lists.h"
#include <unistd.h>

int _strlen(char *str);
int _putchar(char c);

/**
 * print_list - print the elements of a linked list
 * @h: the head of the list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	int len = 0, i = 0;
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			len = _strlen(h->str);
			_putchar('[');
			_putchar(len + '0');
			_putchar(']');
			_putchar(' ');

			for (i = 0; i < len; i++)
				_putchar(h->str[i]);

			_putchar('\n');
		}
		else
		{
			_putchar('[');
			_putchar(48);
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
