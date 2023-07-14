#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	int x, y;

	while (i <= 9)
	{
		x = 0;
		while (x <= 9)
		{
			y = 0;
			while (y <= 9)
			{
				if (i != x &&
				    i < x &&
				    x != y &&
				    x < y)
				{
					putchar(i + 48);
					putchar(x + 48);
					putchar(y + 48);

					if (i + x + y != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++y;
			}
			++x;
		}
		++i;
	}
	putchar('\n');

	return (0);
}
