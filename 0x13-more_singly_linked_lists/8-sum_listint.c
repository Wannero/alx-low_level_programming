#include "lists.h"

/**
 * sum_listint - Function that sum all the data (n).
 *
 * @head: a pointer to the head of the list.
 *
 * Return: 0 if the list is empty or the sum.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{

		sumofnodes(head, &sum);

		return (sum);
	}
	return (0);
}

/**
 * sumofnodes - fonction that find the sum of ndoes.
 *
 * @head: a pointer to the head.
 * @sum: integer that sums.
 *
 * Return: the sum.
 */

void sumofnodes(listint_t *head, int *sum)
{
	int n;

	if (!head)
		return;

	n = head->n;

	sumofnodes(head->next, sum);

	*sum = *sum + n;
}
