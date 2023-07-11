#include "main.h"

/**
 * create_file - create a new file
 * @filename: pointer to the filename
 * @text_content: pointer to the text the file should contain
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op, wt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(op, text_content, len);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}
