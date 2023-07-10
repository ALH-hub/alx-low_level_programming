#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to read from file
 * Return: 0 on failure and the actual number of letters on success
 */
size_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wt;
	char *str;

	if (filename == NULL)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, str, letters);
	wt = write(STDOUT_FILENO, str, rd);

	if (op == -1 || rd == -1 || wt == -1 || wt != rd)
	{
		free(str);
		return (0);
	}

	free(str);
	close(op);

	return (wt);
}
