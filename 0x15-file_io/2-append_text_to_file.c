#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: A pointer to the name.
 * @text_content: The string to add to the end.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist- -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, n, le = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (le = 0; text_content[le];)
			le++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	n = write(i, text_content, le);

	if (i == -1 || n == -1)
		return (-1);

	close(i);

	return (1);
}}
