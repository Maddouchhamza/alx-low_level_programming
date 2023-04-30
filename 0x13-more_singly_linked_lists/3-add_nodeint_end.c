#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t lis
 * @head: of the linked list
 * @n: argument of the new node to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h, *d;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	h = *head;
	while (h != NULL)
	{
		d = h;
		h = h->next;
	}
	d->next = new;
	return (new);
}
