#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: amount of bytes
 *
 * Return: pointer to our new allocated memory
 *        or exit with 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *new_;

	new_ = malloc(b);
	if (new_ == NULL)
		exit(98);
	return (new_);
}
