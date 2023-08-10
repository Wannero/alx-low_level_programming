#include <stdlib.h>

/**
 * _realloc - fonction that reallocate a memory block
 *
 * @ptr: pointer to previous memory
 * @old_size: old memory array size
 * @new_size: new memory array size
 *
 * Return: pointer to new memory
 *         NULL = fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr_, *temp_ptr_;
	unsigned int s;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr_ = malloc(new_size);
		if (new_ptr_ == NULL)
			return (NULL);
		free(ptr);
		return (new_ptr_);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr_ = malloc(new_size);
	if (new_ptr_ == NULL)
		return (NULL);

	temp_ptr_ = ptr;

	for (s = 0; s < old_size; s++)
		new_ptr_[s] = temp_ptr_[s];

	free(ptr);
	return (new_ptr_);
}
