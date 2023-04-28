#include "lists.h"
#include <stdlib.h>
/**
 * free_list -  frees a list_t list
 * @head: head of a linked list to free
 *
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
