#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: arguments passed
 * @argv: holds the arguments passed
 *
 * Return: Success
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int L = 0, G;

	while (L < argc)
	{
		G = L;
		L++;
	}
	printf("%d\n", G);
	return (0);
}
