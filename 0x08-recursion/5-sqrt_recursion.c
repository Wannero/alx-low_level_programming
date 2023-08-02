#include "main.h"

int real_sqrt(int x, int y);

/**
 * _sqrt_recursion - function returns the natural square root of a number.
 * @n: number that we will calculate its square root
 *
 * Return: the natural square root
 */
 
int _sqrt_recursion(int n)
{
	return (real_sqrt(n, 1));
}

/**
 * real_sqrt - Calculates natural square root
 * @x: number that we will calculate its square root
 * @y: iterate number
 *
 * Return: the natural square root
 */
int real_sqrt(int x, int y)
{
	int v = y * y;

	if (v > x)
		return (-1);

	if (v == x)
		return (y);

	return (real_sqrt(x, y + 1));
}
