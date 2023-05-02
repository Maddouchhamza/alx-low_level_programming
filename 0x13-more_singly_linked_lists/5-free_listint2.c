#include "lists.h"
/**
 * free_listint2 - that frees a listint_t list
 * @head: head of a linked list
 *
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;
	h = *head;
	while (h != NULL)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}
}
