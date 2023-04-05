#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *ahead, *behind = NULL;

while (*head && (*head)->next)
{
ahead = (*head)->next;
(*head)->next = behind;
behind = *head;
*head = ahead;
}
if (*head)
(*head)->next = behind;
return (*head);
}
