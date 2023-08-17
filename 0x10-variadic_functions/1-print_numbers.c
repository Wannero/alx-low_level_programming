#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * @separator: The string to be printed.
 * @n: The number of integers passed.
 * @...: A variable number of numbers.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap_yasuo;
	unsigned int s;

	va_start(ap_yasuo, n);

	for (s = 0; s < n; s++)
	{
		printf("%d", va_arg(ap_yasuo, int));
		if (s < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap_yasuo);
}
