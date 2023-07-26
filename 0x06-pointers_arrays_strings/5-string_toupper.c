#include "main.h"

/**
 * string_toupper - converts lowercase characters to uppercase
 * @s: the string
 *
 * Return: the converted string
 **/

char *string_toupper(char *s)
{
	int n;

	n = 0;
	while (s[n])
	{
		if (s[n] >= 'a' && s[n] <= 'z')
		{
			s[n] += 'A' - 'a';
		}
		n++;
	}
	return (s);
}
