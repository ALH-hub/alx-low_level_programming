 #include "main.h"

/**
 * rev_array - reverse the content of an interger array
 * @a: the array to reverse
 * @n: the size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n, tmp = 0;

	while (i <= j && j >= i)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		i++;
		j--;
	}
}
