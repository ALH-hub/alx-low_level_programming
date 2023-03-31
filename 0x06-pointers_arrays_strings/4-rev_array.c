 #include "main.h"

/**
 * rev_array - reverse the content of an interger array
 * @a: the array to reverse
 * @n: the size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
