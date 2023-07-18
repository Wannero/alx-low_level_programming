#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The charachter we will be checking.
 *
 * Return: 1 if character is alphabet, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
			return (1);
	else
			return (0);
}
