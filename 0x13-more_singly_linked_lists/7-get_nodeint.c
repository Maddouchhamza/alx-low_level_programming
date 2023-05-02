#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: of linked list
 * @index: of the node to get
 *
 * Return: the node of index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	h = head;
	while (h != NULL)
	{
		i++;
		if (i == index)
			return (h);
		h = h->next;
	}
	return (NULL);
}
