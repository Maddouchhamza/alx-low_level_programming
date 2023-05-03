#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: of the linked list
 * @idx: where to insert the new node
 * @n: value of n argument
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tmp;
listint_t *previous;
listint_t *new_node;
unsigned int i = 0;

if (*head == NULL && idx != 0)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

tmp = *head;
while (i < idx && tmp != NULL)
{
previous = tmp;
tmp = tmp->next;
i++;
}

if (tmp == NULL && i < idx)
return (NULL);

new_node->next = tmp;
previous->next = new_node;

return (new_node);
}
