#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node.
 *
 * @head: a pointer to the head.
 * @index: the index of the node.
 *
 * Return: the nth node of listint_t or NULL = doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthnode;
	unsigned int counter;

	counter = 0;

	nthnode = head;

	while (nthnode != NULL)
	{
		if (counter == index)
			return (nthnode);
		counter++;
		nthnode = nthnode->next;
	}

	return (NULL);
}
