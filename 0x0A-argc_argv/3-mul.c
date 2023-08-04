#include <stdio.h>
#include <stdlib.h>

/**
* main - prints multiplication
*
*@argc: number of arguments
*@argv: array of arguments
*
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int s, v, mult;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	s = atoi(argv[1]);
	v = atoi(argv[2]);
	mult = s * v;

	printf("%d\n", mult);
	return (0);
}
