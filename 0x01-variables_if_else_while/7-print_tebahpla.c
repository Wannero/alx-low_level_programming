#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number = 'z';

	for (number = 'z'; number >= 'a'; number--)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
