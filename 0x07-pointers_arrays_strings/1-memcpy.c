#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: memory where we stored
 * @src: memory where we copied
 * *@n: number of bytes
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int d = n;

	for (; a < d; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
