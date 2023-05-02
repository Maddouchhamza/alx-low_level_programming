#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer of pointer to the head of linked list
 *
 * Retunr: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *d;

	d = (*head);
	free(*head);
	*head = (*head)->next;
	return (d->n);
}
