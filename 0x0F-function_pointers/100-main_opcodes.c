#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int b, n;
	char *x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	x = (char *)main;

	for (n = 0; n < b; n++)
	{
		if (n == b - 1)
		{
			printf("%02hhx\n", x[n]);
			break;
		}
		printf("%02hhx ", x[n]);
	}
	return (0);
}
