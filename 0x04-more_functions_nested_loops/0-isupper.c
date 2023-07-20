#include "main.h"

/**
 * _isupper - checks if character is uppercase.
 * @c : is contain char.
 * Return: 1 if character is uppercase, 0 if not.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
