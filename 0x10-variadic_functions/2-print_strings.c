#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints a variable number of strings.
 *
 * @separator: The string to be printed between strings.
 * @n: The number of strings to print.
 * @...: The variable arguments of type char* to print.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int s;
	char *stronk;

	va_start(args, n);

	for (s = 0; s < n; s++)
	{
		stronk = va_arg(args, char *);

		if (stronk == NULL)
			printf("(nil)");
		else
			printf("%s", stronk);

		if (separator != NULL && s != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
