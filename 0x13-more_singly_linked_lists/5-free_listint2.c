#include "lists.h"

/**
 * free_listint2 -function that frees a listint_t list.
 *
 * @head: double pointer to the head of the list
 *
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *newhead;

	if (head == NULL)
		return;

	newhead = *head;
	while (newhead)
	{
		newhead = newhead->next;
		free(*head);
		*head = newhead;
	}
	/* task condition */
	*head = NULL;
}
