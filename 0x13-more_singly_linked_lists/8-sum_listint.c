#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: of the linked list
 *
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *h;

	if (head == NULL)
		return (0);
	h = head;
	while (h != NULL)
	{
		s += h->n;
		h = h->next;
	}
	return (s);
}
