#include "lists.h"
/**
 * listint_len - count the number of nodes
 * @h: head of linked list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
