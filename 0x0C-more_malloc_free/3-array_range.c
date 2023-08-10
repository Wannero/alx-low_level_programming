#include <stdlib.h>

/**
 * array_range - fonction that creates an array of integers
 *
 * @min: min number
 * @max: max number
 *
 * Return: array pointer address
 *         NULL if it fails
 */

int *array_range(int min, int max)
{
	int s, *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (s = 0; min <= max; s++)
	{
		arr[s] = min;
		min++;
	}
	return (array);
}
