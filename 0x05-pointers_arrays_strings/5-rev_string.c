#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to reverse
 * return: void
 */

void rev_string(char *s)
{
	int end = 0;
	int low = 0;
	char temp;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;

	while (end >= low && low <= end)
	{
		temp = s[low];
		s[low] = s[end];
		s[end] = temp;
		end--;
		low++;
	}
}
