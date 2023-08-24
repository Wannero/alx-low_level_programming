#include <stdio.h>
#include "list.h"

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
