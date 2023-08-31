#include "main.h"

/**
 * get_bit - return one bit
 *
 * @n: the number
 * @index: the position to read the bit
 *
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	if (index > 64)
		return (-1);

	b = n >> index;

	return (b & 0x1);
}
