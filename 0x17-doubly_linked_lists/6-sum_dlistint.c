#include "lists.h"

/**
 * sum_dlistint - this shows us the sum of all the data (n).
 *
 * @head: a pointer to the head of the DLL
 *
 * Return: the sum of all data of the DLL or 0 = empty.
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int add_data = 0;

	while (head != NULL)
	{
		add_data += head->n;
		head = head->next;
	}
	return (add_data);
}
