#include "lists.h"
/**
* reverse_listint - reverses a listint_t linked list
* @head: pointer to listint_t list nodes
*
* Return: pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *next = NULL;
listint_t *prev = NULL;

while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;

return (*head);
}
