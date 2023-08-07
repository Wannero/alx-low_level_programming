#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string or fail = NULL
 */

char *argstostr(int ac, char **av)
{
	int a, b, w, leng;
	char *fr;

	if (ac == 0 || av == NULL)
		return (NULL);

	leng = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			leng++;
		leng++;
	}

	fr = malloc((leng + 1) * sizeof(char));
	if (fr == NULL)
		return (NULL);

	w = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			fr[w] = av[a][b];
			w++;
		}
	    fr[w] = '\n';
		w++;
	}
	fr[w] = '\0';

	return (fr);
}
