#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Alph = 'a';

	for (Alph = 'a'; Alph <= 'z'; Alph++)
	{
		if (Alph == 'e' || Alph == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
