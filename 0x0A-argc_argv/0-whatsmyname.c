#include <stdio.h>

/**
 * main - this fun prints its name
 * @argc: count line command argument
 * @argv: contain arg in line command
 *
 * return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

		return (0);
}
