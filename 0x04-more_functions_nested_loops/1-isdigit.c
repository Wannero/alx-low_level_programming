#include "main.h"

/**
 * _isdigit - cheks if character is digits
 * @c: contain character.
 * Return: return 1 if digit, otherwise 0 .
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
