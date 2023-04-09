#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: argument countrer
 * @argv: argument array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int n1, n2, prod = 1;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		prod = n1 * n2;
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
