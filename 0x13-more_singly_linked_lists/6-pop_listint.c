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
	int i;

	if (*head == NULL)
		return (0);
	d = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = d;
	return (i);
}
