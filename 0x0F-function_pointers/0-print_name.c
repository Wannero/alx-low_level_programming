#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name : Function that prints name
 *
 * @name: Name should return.
 * @f: Function pointer to point code.
 *
 * Return: Name or NULL
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	(*f)(name);
}
