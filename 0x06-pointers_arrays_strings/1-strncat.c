#include "main.h"
/**
 * _strncat - concatenate two strings using n.
 * @dest: input value.
 * @src: input value.
 * @n: input value.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int f = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	while (f < n && src[f] != '\0')
	{
	dest[l] = src[f];
	l++;
	f++;
	}
	dest[l] = '\0';
	return (dest);
}
