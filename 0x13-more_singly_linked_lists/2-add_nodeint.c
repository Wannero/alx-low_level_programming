#include "lists.h"

/**
 * add_nodeint - fontion that adds a new node at the beginning
 *
 * @head: double pointer to listint_t
 * @n: the number of elements in listint_t
 *
 * Return: he address of the new element, or NULL if it failed
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *news;

	news = malloc(sizeof(listint_t));
	if (new)
	{
		news->n = n;
		news->next = *head;
		*head = news;
		return (news);
	}
	free(news);
	return (NULL);
}
