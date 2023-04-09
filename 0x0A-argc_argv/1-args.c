#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: argumetn counter
 * @argv: argument array
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
