#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *next;
unsigned int i;

if (*head == NULL)
return (-1);
current = *head;
for (i = 0; i < index && current != NULL; i++)
current = current->next;
if (current == NULL)
return (-1);
next = current->next;
if (current->prev == NULL)
{
*head = next;
if (next != NULL)
next->prev = NULL;
}
else
{
current->prev->next = next;
if (next != NULL)
next->prev = current->prev;
}
free(current);
return (1);
}
