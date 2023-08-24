#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning
 *
 * @head: pointer to the first node.
 * @str: string to add to new node.
 *
 * Return: NULL if it fails
 *
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	size_t n = 0;

	if (str == NULL)
		n = 0;

	while (str[n] != '\0')
		n++;

	i = malloc(sizeof(list_t));
	if (*head == NULL)
		i->next = NULL;
		
	if (i == NULL)
		return (NULL);

	else
		i->next = *head;

	i->str = strdup(str);
	i->len = n;
	*head = i;

	return (*head);
}
