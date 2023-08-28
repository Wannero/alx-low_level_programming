#include "lists.h"

/**
 * add_nodeint - a function that add new node
 *
 * @head: linked list
 * @n: integer
 *
 * Return: he address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
