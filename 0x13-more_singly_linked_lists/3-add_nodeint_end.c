#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end.
 *
 * @head: double pointer to listint_t.
 * @n: number of elements in listint_t.
 *
 * Return: a poitner to the new node or NULL if it failed.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *first;

	new_end = malloc(sizeof(listint_t));
	if (new_end)
	{
		new_end->next = NULL;
		new_end->n = n;
		if (!*head)
		{
			*head = new_end;
			return (new_end);
		}
		firs = *head;
		while (first->next)
			first = first->next;
		first->next = new_end;
		return (new_end);
	}
	free(new_end);
	return (NULL);
}
