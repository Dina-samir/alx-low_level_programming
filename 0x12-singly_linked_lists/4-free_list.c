#include "lists.h"

/**
 * free_list - frees up all the memory allocated for a list
 * @head: points to a node on the list
 * Return: void
 */

void free_list(list_t *head) {
    list_t *current = head;
    list_t *next;

    while (current != NULL) {
        next = current->next;
        free(current->str);
        free(current);
        current = next;
    }
}

