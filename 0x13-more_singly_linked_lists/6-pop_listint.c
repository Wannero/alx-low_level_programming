#include "lists.h"

/**
 * pop_listint - fontion that deletes the head node.
 *
 * @head: double pointer to the head.
 *
 * Return: the head nodes data (r).
 */

int pop_listint(listint_t **head)
{
	int r = 0;
	listint_t *ptraux;

	if (*head == NULL)
		return (0);
	r = (*head)->r;
	ptraux = (*head)->next;
	free(*head);
	*head = ptraux;
	return (r);
}
