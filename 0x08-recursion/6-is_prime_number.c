#include "main.h"

int prime_checker(int s, int p);

/**
 * is_prime_number - function checks if the input integer is a prime number
 * @n: the number
 *
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (prime_checker(n, 1));
}

/**
 * prime_checker - Check if number is prime
 * @s: the number
 * @p: the iteration times
 *
 * Return: 1 for prime or 0 composite
 */

int prime_checker(int s, int p)
{
	if (s <= 1)
		return (0);
	if (s % p == 0 && p > 1)
		return (0);
	if ((s / p) < p)
		return (1);
	return (prime_checker(s, p + 1));
}
