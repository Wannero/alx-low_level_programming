#include "lists.h"

/**
 * get_dnodeint_at_index - this shows us the nth node of a DLL.
 *
 * @head: a pointer to the head of the DLL.
 * @index: index of the node to return its value.
 *
 * Return: value of the node in the index or NULL = exist.
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_index;
	unsigned int idx_runner;

	if (head == NULL)
		return (NULL);

	current_index = head;
	head->n = current_index->n;
	idx_runner = 0;

	while (current_index != NULL)
	{
		if (idx_runner == index)
			return (current_index);
		idx_runner++;
		current_index = current_index->next;
	}
	return (NULL);
}
