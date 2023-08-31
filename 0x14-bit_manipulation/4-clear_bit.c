#include "main.h"

/**
 * clear_bit - function that sets a bit to 0
 *
 * @n: the number.
 * @index: the position to set the bit.
 *
 * Return: 1 = success -1 = fail.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
