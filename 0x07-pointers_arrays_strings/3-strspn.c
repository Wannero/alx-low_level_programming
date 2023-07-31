#include "main.h"

/**
 * _strspn - Entry point
 * @x: input
 * @accept: input
 *
 * Return: Always 0 (Success)
*/

unsigned int _strspn(char *x, char *accept)
{
	unsigned int k = 0;
	int w;

	while (*x)
	{
		for (w = 0; accept[w]; w++)
		{
			if (*x == accept[w])
			{
				k++;
				break;
			}
			else if (accept[w + 1] == '\0')
				return (k);
		}
		x++;
	}
	return (k);
}
