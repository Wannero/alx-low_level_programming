#include "lists.h"

/**
 * list_len - Function that returns the number of elements in linked
 *
 * @h: Pointer to the head.
 *
 * Return: number of nodes.
 *
*/

size_t list_len(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
