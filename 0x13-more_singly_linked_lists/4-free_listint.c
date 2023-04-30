#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: head of linked list
 *
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *h, *d;

	h = head;
	while (h != NULL)
	{
		d = h;
		h = h->next;
		free(d);
	}
}
