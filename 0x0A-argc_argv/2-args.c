#include <stdio.h>i

/**
 * main - function print all argument
 * @argc:number arg
 * @argv:array of pointer
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
