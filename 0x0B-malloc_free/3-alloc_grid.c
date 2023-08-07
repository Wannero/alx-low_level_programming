#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 *
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
			s[i][y] = 0;
	}
	return (s);
}
