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
	size_t str_len = 0;

	/*set strig length to 0 if its NULL*/
	if (str == NULL)
		str_len = 0;

	/*count length of string*/
	while (str[str_len] != '\0')
		str_len++;

	i = malloc(sizeof(list_t));
	if (ie == NULL)
		return (NULL);
	if (*head == NULL)
		i->next = NULL;
	else
		i->next = *head;

	i->str = strdup(str);
	i->len = str_len;
	*head = i;

	return (*head);
}
