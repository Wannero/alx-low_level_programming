#include "main.h"

/**
 * get_endianness - function that get the endiannes.
 *
 * Return: 1 in little indian - 0 in big indian.
 *
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
