#include "lists.h"
#include <stdio.h>
/**
 * print_listint -  function that prints all the elements of a listint_t list
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
