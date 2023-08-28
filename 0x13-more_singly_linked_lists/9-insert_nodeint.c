#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node.
 *
 * @head: linked list.
 * @idx: nth node.
 * @n: struct member.
 *
 * Return: nothing.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int s = 0;
	struct listint_s *temp = *head, *nxtnode, *newnode;

	if (head == NULL)
		return (NULL);

	while (s < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		s++;
	}
	if (temp == NULL && idx != 0)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		nxtnode = temp->next;
		newnode->next = nxtnode;
		temp->next = newnode;
	}

	return (newnode);
}
