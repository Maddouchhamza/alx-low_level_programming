#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: of the linked list
 * @idx: where to insert the new node
 * @n: value of n argument
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	h = *head;
	while (h != NULL)
	{
		if (idx == i)
		{
			h->next = new;
			new->next = (h->next)->next;
			return (*head);
		}
		h = h->next;
		i++;
	}
	return (NULL);
}
