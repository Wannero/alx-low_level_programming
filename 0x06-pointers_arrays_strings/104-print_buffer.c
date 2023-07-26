#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer.
 * @b: The buffer to be printed.
 * @size: The number of bytes.
 */

void print_buffer(char *b, int size)
{
	int y, x;

	for (y = 0; y < size; y += 10)
	{
		printf("%08x: ", y);

		for (x = 0; x < 10; x++)
		{
			if ((x + y) >= size)
				printf("  ");

			else
				printf("%02x", *(b + x + y));

			if ((x % 2) != 0 && x != 0)
				printf(" ");
		}

		for (x = 0; x < 10; x++)
		{
			if ((x + y) >= size)
				break;

			else if (*(b + x + y) >= 31 &&
				 *(b + x + y) <= 126)
				printf("%c", *(b + x + y));

			else
				printf(".");
		}

		if (y >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
