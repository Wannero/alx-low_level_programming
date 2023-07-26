#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 * @s: the string to iterate through.
 *
 * Return: return the converted string.
 **/

char *leet(char *s)
{
	int v;
	int w;
	char leet[11] = "aAeEoOtTlL";
	int convert[5] = {4, 3, 0, 7, 1};

	v = 0;
	w = 0;
	while (s[v])
	{
		w = 0;
		while (leet[w])
		{
			if (s[v] == leet[w])
			{
				s[v] = convert[w / 2] + 48;
			}
			w++;
		}
		v++;
	}
	return (s);
}

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *b;

	b = leet(s);
	printf("%s", b);
	printf("%s", s);
	return (0);
}
