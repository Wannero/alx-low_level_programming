#include <stdlib.h>

/**
 * array_range - fontion that creates an array of integers
 *
 * @min: min number
 * @max: max number
 *
 * Return: array pointer address
 *         NULL = fails
 */

int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
