#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creat char array
 *
 * @size: size
 * @c: specifique char
 *
 * Return:if size 0 or fiald return NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ls;
	unsigned int v;

	if (size == 0)
		return (NULL);

	ls = malloc(sizeof(char) * size);

	if (ls == NULL)
		return (NULL);

	for (v = 0; v < size; v++)
	{
		ls[v] = c;
	}
	return (ls);
}
