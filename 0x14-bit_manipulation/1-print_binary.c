#include "main.h"

/**
 * print_binary - decimal to binary without use / %
 *
 * @n: the decimal
 *
 */

void print_binary(unsigned long int n)
{
	int f = 0;
	unsigned long int m = 1;

	m <<= 63;
	if (n == 0)
		_putchar('0');

	while (m > 0)
	{
		if ((n & m) == 0 && f == 1)
			_putchar('0');
		if ((n & m) != 0)
		{
			_putchar('1');
			f = 1;
		}

		m = m >> 1;
	}
}
