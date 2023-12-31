#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int a, t = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		a = (*n1 - '0') + (*n2 - '0');
		a += t;
		*(r + r_index) = (a % 10) + '0';
		t = a / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		a = (*n1 - '0') + t;
		*(r + r_index) = (a % 10) + '0';
		t = a / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		a = (*n2 - '0') + t;
		*(r + r_index) = (a % 10) + '0';
		t = a / 10;
	}

	if (t && r_index >= 0)
	{
		*(r + r_index) = (t % 10) + '0';
		return (r + r_index);
	}

	else if (t && r_index < 0)
		return (0);

	return (r + r_index + 1);
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, x = 0, z = 0;

	for (index = 0; *(n1 + index); index++)
		x++;

	for (index = 0; *(n2 + index); index++)
		z++;

	if (size_r <= x + 1 || size_r <= z + 1)
		return (0);

	n1 += x - 1;
	n2 += z - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
