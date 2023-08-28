#include "lists.h"

/**
 * pop_listint - deletes the head node.
 *
 * @head: double pointer to the head.
 *
 * Return: the head nodes data (n).
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *ptraux;

	if (*head == NULL)
		return (0);

	n = (*head)->n;

	ptraux = (*head)->next;

	free(*head);

	*head = ptraux;

	return (n);
}
