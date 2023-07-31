#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 *
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int v;
	int u;

	for (v = 0; v < 8; v++)
	{
		for (u = 0; u < 8; u++)
			_putchar(a[v][u]);
		_putchar('\n');
	}
}
