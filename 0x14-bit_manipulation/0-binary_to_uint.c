#include "main.h"

/**
 * binary_to_uint - convert binary to decimal.
 *
 * @b: the binary number in string format
 *
 * Return: this return the convert number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res, ba;
	int s;

	res = 0;
	s = 0;
	ba = 1;

	if (!b)
		return (0);

	while (*(b + s))
	{
		if (*(b + s) != '0' && *(b + s) != '1')
			return (0);
		s++;
	}
	for (s--; s >= 0; s--)
	{
		if (*(b + s) == '1')
			res = res + ba;
		ba = ba * 2;
	}

	return (res);
}
