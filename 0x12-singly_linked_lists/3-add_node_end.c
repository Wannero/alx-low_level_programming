#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end
 *
 * @head: pointer to the first node.
 * @str: string to add.
 *
 * Return: NULL if it fails.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *b;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	b = *head;

	if (b == NULL)
		*head = new_node;
	else
	{
		while (b->next != NULL)
			b = b->next;
		b->next = new_node;
	}

	return (*head);
}
