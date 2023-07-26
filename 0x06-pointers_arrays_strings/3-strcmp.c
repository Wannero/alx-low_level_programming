#include "main.h"

/**
 * _strcmp - function that compares two strings. s1 and s2.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: returns the difference between the two strings;
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a])
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
