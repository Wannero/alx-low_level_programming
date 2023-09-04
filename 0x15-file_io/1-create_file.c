#include "main.h"

/**
 *  create_file - function create a file and write in it.
 *
 * @filename:file to be created.
 * @text_content: content of the file created.
 *
 * Return: 1 or -1;
 */

int create_file(const char *filename, char *text_content)
{
	int fd, le, n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (le = 0; text_content[le] != '\0'; le++)
		;
		n = write(fd, text_content, le);
	}
	if (n == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
