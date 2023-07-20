#include "main.h"
/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int i, a = 0;

	while (a < 10)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar('0' + i);
		}
	a++
	}
	_putchar('\n');
}
