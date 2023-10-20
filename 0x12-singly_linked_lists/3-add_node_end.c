#include "lists.h"

/**
 * get_length - returns string length
 * @str: string 
 * Return: length of string
 */
unsigned int get_length(const char *str)
{
	int i=0, len = 0;
	if (str == NULL)
		return (0);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * add_node_end - add node to end of linked list
 * @head: pointer to pointer to linked list
 * @str: string of the new node
 * Return: address of NULL linked list 
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new;
	list_t *last;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	len = get_length(str);
	last = *head;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (*head);
}
