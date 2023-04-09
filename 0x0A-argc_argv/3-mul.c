#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: argument countrer
 * @argv: argument array
 * Return: multiplication result
 */

int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc <= 1)
		printf("Error\n");
	else
	{
		for (i = 0; i < argc; i++)
		{
			prod = prod * atoi(argv[i]);
		}
		printf("%d\n", prod);
	}
	return (0);
}
