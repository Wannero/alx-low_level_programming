#include "main.h"

/**
 * print_numbers - it will print numbesr from 0 to 9
 * Return: it will return numbers
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
