#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, h, sum;

	sum = 0;
	for (a = 1; a < argc; a++)
	{
		for (h = 0; argv[a][h] != '\0'; h++)
		{
			if (!isdigit(argv[a][h]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
