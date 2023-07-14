#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0, x;

	while (i <= 9)
	{
		x = 0;
		while (x <= 9)
		{
			if (i != x && i < x)
			{
				putchar(i + 48);
				putchar(x + 48);

				if (i + x != 17)
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
