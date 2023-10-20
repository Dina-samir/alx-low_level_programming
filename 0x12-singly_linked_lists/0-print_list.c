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
	unsigned int c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		c++;
		h = h->next;
	}
	return (c);
}
