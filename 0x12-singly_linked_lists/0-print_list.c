#include <stdio.h>
#include "list.h"

/**
 * print_list - Function that prints all the elements of a list_t.
 *
 * @h: constant pointer.
 *
 * Return: the numbers.
 *
 */

size_t print_list(const list_t *h)
{
    size_t i = 0;
    
    for (; h != NULL; h = h->next)
    {
        if (h->str != NULL)
            printf("[%d] %s\n", h->len, h->str);
        else
            printf("[0] (nil)\n");

        i++;
    }
    
    return i;
}
