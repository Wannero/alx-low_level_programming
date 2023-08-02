#include "main.h"

/**
 * _strlen_recursion - returns the length
 * @s: string
 *
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character
 * @s: string
 * @a: smallest iterator.
 * @b: highest iterator.
 *
 * Return: .
 */

int comparator(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a ==  b + 1)
			return (1);
		return (0 + comparator(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string
 * @s: string.
 *
 * Return: 1 is palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
