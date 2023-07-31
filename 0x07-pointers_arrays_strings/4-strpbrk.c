#include "main.h"

/**
 * _strpbrk - Entry point
 * @x: input
 * @accept: input
 *
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *x, char *accept)
{
	int f;

	while (*x)
	{
		for (f = 0; accept[f]; f++)
		{
		if (*x == accept[f])
		return (x);
		}
	x++;
	}
	return ('\0');
}
