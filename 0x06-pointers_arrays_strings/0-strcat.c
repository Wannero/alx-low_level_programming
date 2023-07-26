#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: input value
 * @src: input value
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int f = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	while (src[f] != '\0')
	{
		dest[l] = src[f];
		l++;
		f++;
	}

	dest[l] = '\0';
	return (dest);
}
