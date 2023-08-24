#include "lists.h"

/**
 * print_list - Function that print elements in a linked list.
 *
 * @h: pointer to head first node.
 *
 * Return: Number.
*/

size_t print_list(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{

		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);


		h = h->next;

		i += 1;
	}

	printf("[%d] %s\n", h->len, h->str);

	return (i);
}
