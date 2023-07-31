#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer
 * @b: char b
 * @n: unsigned int
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
