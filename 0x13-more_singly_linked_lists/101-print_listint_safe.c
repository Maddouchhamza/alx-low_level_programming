#include "lists.h"
#include <stdlib.h>
/**
* print_listint_safe - prints a listint_t linked list
* @head: pointer to listint_t linked list
*
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
long int dist;
size_t counter = 0;

while (head)
{
dist = head - head->next;
counter++;
printf("[%p] %d\n", (void *)head, head->n);
if (dist > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}
return (counter);
}
