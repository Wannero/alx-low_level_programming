#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: the string.
 *
 * Return: the captilized string
 **/

char *cap_string(char *s)
{
	int d;

	d = 0;
	if (s[d] >= 'a' && s[d] <= 'z')
	{
		s[d] -= 32;
	}
	while (s[d])
	{
		if (s[d] == ' ' || s[d] == '\t' || s[d] == '\n' || s[d] == ','
			|| s[d] == ';' || s[d] == '.' || s[d] == '!' || s[d] == '?'
			|| s[d] == '\"' || s[d] == '(' || s[d] == ')' || s[d] == '{'
			|| s[d] == '}')
		{
			if (s[d + 1] >= 'a' && s[d + 1] <= 'z')
				s[d + 1] -= 'a' - 'A';
		}

		d++;
	}
	return (s);
}
