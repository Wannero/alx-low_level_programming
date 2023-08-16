#include "function_pointers.h"

/**
 * int_index - Function that earches for an integer in an array.
 *
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: If no element matches or size <= 0 - -1.
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (ind = 0; ind < size; ind++)
	{
		if (cmp(array[ind]) != 0)
			return (ind);
	}

	return (-1);
}
