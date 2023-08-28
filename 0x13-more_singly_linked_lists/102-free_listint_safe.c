#include "lists.h"

/**
* free_listint_safe - function that frees a list.
*
* @h: the pointer to a pointer of head.
*
* Return: the size of the list.
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t **array;
	unsigned int s = 0;
	unsigned int flag = 0;

	array = malloc(sizeof(listint_t *) * 1024);
	if (!array)
		exit(98);
	while (*h != NULL)
	{
		for (s = 0; s < count; s++)
		{
			if (*h == array[s])
			{
				flag = 1;
				break;
			}
			else
				flag = 0;
		}
		if (flag == 1)
			break;
		array[count] = *h;
		*h = (*h)->next;
		count++;
	}
	s = 0;
	while (s < count)
	{
		free(array[s]);
		s++;
	}
	free(array);
	*h = NULL;
	return (count);
}
