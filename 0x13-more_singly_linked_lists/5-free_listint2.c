#include "lists.h"
/**
 * free_listint2 - that frees a listint_t list
 * @head: head of a linked list
 *
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *h, *d;

	h = *head;
	while (h != NULL)
	{
		d = h;
		h = h->next;
		free(d);
	}
	*head = NULL;
}
