#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: of linked list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *next;
listint_t *here;
listint_t *tmp;
unsigned int i = 0;

if (*head == NULL)
return (-1);
if (index == 0)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
return (1);
}

here = *head;
while (i < index)
{
if (here == NULL || here->next == NULL)
return (-1);
next = here->next;
if (i == (index - 1))
break;
here = next;
i++;
}

tmp = next;
here->next = tmp->next;
free(next);
return (1);
}
