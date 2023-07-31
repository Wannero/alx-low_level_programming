#include "main.h"

/**
 * _strstr - Entry point
 * @x: input
 * @y: input
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *x, char *y)
{
	for (; *x != '\0'; x++)
	{
		char *i = x;
		char *j = y;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (x);
	}
	return (0);
}
