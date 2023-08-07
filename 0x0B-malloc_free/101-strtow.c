#include <stdlib.h>
#include "main.h"

/**
 * count_ - function to count the number of words
 *
 * @o: string to evaluate
 *
 * Return: number of words
 */

int count_(char *o)
{
	int fl, a, g;

	fl = 0;
	g = 0;

	for (a = 0; o[a] != '\0'; a++)
	{
		if (o[a] == ' ')
			fl = 0;
		else if (fl == 0)
		{
			fl = 1;
			g++;
		}
	}

	return (g);
}

/**
 * strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	char **mat, *tp;
	int n, k = 0, ln = 0, wor, c = 0, start, end;

	while (*(str + ln))
		ln++;
	wor = count_(str);
	if (wor == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (wor + 1));
	if (mat == NULL)
		return (NULL);

	for (n = 0; n <= len; n++)
	{
		if (str[n] == ' ' || str[n] == '\0')
		{
			if (c)
			{
				end = n;
				tp = (char *) malloc(sizeof(char) * (c + 1));
				if (tp == NULL)
					return (NULL);
				while (start < end)
					*tp++ = str[start++];
				*tp = '\0';
				mat[k] = tp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = n;
	}

	mat[k] = NULL;

	return (mat);
}
