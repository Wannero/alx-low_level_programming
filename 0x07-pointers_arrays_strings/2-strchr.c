#include "main.h"

/**
 * _strchr - Entry point
 * @x: input
 * @y: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *x, char y)
{
	int c = 0;

	for (; x[c] >= '\0'; c++)
	{
		if (x[c] == y)
			return (&x[c]);
	}
	return (0);
}
