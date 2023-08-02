#include "main.h"

int check_prime(int s, int p);

/**
 * is_prime_number - function checks if the input integer is a prime number
 * @n: the number
 *
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

int check_prime(int s, int p)
{
	if (s <= 1)
		return (0);
	if (s % p == 0 && p > 1)
		return (0);
	if ((s / p) < p)
		return (1);
	return (check_prime(s, p + 1));
}
