#include <stdio.h>

/**
*main - adds numbers
*
*@argc: number of arguments
*@argv: array of arguments
*
*Return: 0 if success, 1 if fail
*/

int main(int argc, char *argv[])
{
	int s, v, add = 0;

	for (s = 1; s < argc; s++)
	{
		for (v = 0; argv[s][v] != '\0'; v++)
		{
			if (argv[s][v] < '0' || argv[s][v] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[s]);
	}
