#include <stdio.h>
#include <string.h>
#include "lists.h"   
/**
 * print_list - Prints all the elements of a linked list
 * @h: The head of the linked list
 * Return: The number of nodes of the linked list
 */
size_t print_list(const list_t *h)
{
    unsigned int node_count = 0;   

    while (h)   
    {
        if (h->str)
        {
            printf("[%u] %s\n", h->len, h->str);
        }
        else   
        {
            printf("[0] (nil)\n");
        }
        
        node_count++;   
        h = h->next;    
    }

    return (node_count);
}
