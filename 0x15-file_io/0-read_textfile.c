#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a file.
 *
 * @filename: the file to read.
 * @letters: the number of chars to read
 *
 * Return: this return the number of chars.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, _read, _wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		return (0);
	}

	_wr = write(STDOUT_FILENO, buffer, _read);
	if (_wr == -1 || _wr != _read)
	{
		return (0);
	}

	free(buffer);
	close(fd);
	return (_wr);
}
