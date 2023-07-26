#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: the string that we will convert
 *
 * Return: the converted string
 **/

char *rot13(char *s)
{
	int m;
	int n;

	char *array1 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *array2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	m = 0;

	while (s[m])
	{
		n = 0;
		while (array2[n])
		{
			if (array2[n] == s[m])
			{
				s[m] = array1[n];
				break;
			}
			n++;
		}
		m++;
	}
	return (s);
}
