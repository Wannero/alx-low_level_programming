#include "lists.h"

/**
 * listint_len - function that prints the number of elements
 *
 * @h: constant pointer type list_t
 *
 * Return: the numbers of nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nume;

	nume = 0;
	while (h != NULL)
	{
		nume++;
		h = h->next;
	}
	return (nume);
}
