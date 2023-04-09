#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - sum integers
 * @argc: argument counter
 * @argv: argument array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, num;
	unsigned int j, sum = 0;
	char *s;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			for (j = 0; j < strlen(s); j++)
			{
				if (s[j] < 48 || s[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[i]);
			sum += num;
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%d\n", sum);
		return (1);
	}
}
