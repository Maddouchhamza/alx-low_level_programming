#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of a linked list
 * @str: str of the new node to add
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *h;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = NULL;
	while (str[i] != '\0')
		i++;
	new->len = i;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	h = *head;
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = new;
	return (new);
}
