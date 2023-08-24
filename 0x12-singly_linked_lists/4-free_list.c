#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 *
 * @head: pointer to the first node.
 *
 * Return: nothing.
*/

void free_list(list_t *head)
{
	list_t *i;

	while ((i = head) != NULL)
	{
		head = head->next;
		free(i->str);
		free(i);
	}
}
