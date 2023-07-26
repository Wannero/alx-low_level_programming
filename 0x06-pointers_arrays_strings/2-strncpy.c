#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the number of bytes.
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (src[a] && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	if (a < n)
	{
		while (dest[a])
		{
			dest[a] = '\0';
			a++;
		}
	}
	return (dest);
}
