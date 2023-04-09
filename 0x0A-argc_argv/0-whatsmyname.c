#include <stdio.h>

/**
 * main - main functions with arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	else
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
