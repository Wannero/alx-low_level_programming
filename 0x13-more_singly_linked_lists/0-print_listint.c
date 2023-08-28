#include "lists.h"

/**
 * print_listint - function that prints all the list's elements
 *
 * @h: constant pointer type list_t
 *
 * Return: the numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node;

	node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
