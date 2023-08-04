#include <stdio.h>

/**
 * main - function prints number of argument
 * @argc:number argument
 * @argv:unused arg
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
