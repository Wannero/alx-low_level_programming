#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to the power of y.
 * @l: raised number.
 * @s: The power.
 *
 * Return: result of the raising l to the power s.
 */

int _pow_recursion(int l, int s)
{
	int res = l;

	if (s < 0)
		return (-1);

	else if (s == 0)
		return (1);

	res *= _pow_recursion(l, s - 1);

	return (res);
}
