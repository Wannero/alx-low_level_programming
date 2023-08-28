#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum
 *
 * @head: linked list
 *
 * Return: (sum or 0)
 */

int sum_listint(listint_t *head)
{
	struct listint_s *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}

	return (sum);
}
