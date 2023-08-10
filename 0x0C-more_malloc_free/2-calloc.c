#include <stdlib.h>

/**
 * _memset - fonction that fills memory with a constant byte
 *
 * @a: input pointer that represents memory
 * @u: characters
 * @n: number of bytes
 *
 * Return: A pointer to the filled memory area
 */

char *_memset(char *a, char u, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		a[m] = u;
	return (a);
}

/**
 * _calloc - Function that allocates memory malloc
 *
 * @nmemb: size of array
 * @size: size of elements
 *
 * Return: pointer with new allocated memory
 *         or NULL = fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *v;

	if (nmemb == 0 || size == 0)
		return (NULL);

	v = malloc(nmemb * size);
	if (v == NULL)
		return (NULL);

	_memset(v, 0, nmemb * size);

	return (v);
}
