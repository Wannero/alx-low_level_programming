#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch1 = 'a';
	char ch2 = 'A';

	for (ch1 = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch1);
	}
	for (ch2 = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch2);
	}
	putchar('\n');
	return (0);
}
