#include "main.h"

/**
 * flip_bits - function that count the bit.
 *
 * @n: the number.
 * @m: the number to compare.
 *
 * Return: the number of different bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c;

	c = 0;
	n = n ^ m;
	while (n)
	{
		c += n & 1;
		n >>= 1;
	}
	return (c);
}
