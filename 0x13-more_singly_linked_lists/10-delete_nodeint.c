#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: of linked list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int j = 0;
	listint_t *h, *d;

	h = *head;
	while (h != NULL && j != i)
	{
		j++;
		d = h;
		h = h->next;
	}
	if (j == i)
	{
		d->next = h->next;
		return (1);
	}
	return (-1);
}
