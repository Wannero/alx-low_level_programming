#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, x;

	while (i <= 99)
	{
		x = i;
		while (x <= 99)
		{
			if (x != i)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				if (i != 98 || x != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++x;
		}
		++i;
	}
	putchar('\n');
	return (0);
}
