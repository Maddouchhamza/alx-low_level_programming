#include "lists.h"
/**
 * list_len - count the number of element in a linked list
 * @h: pointer to head of a linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
