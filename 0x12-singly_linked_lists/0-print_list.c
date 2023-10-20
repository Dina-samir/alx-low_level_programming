#include <stdio.h>
#include <string.h>
#include "lists.h"   

size_t print_list(const list_t *h)
{
    size_t node_count = 0;   

    while (h)   
    {
        if (h->str)
        {
            printf("[%u] %s\n", (unsigned int)strlen(h->str), h->str);
        }
        else   
        {
            printf("[0] (nil)\n");
        }
        
        node_count++;   
        h = h->next;    
    }

    return node_count;
}
