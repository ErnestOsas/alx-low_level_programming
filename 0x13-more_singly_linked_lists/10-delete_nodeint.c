#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node in a linked list at an index
 * @head: pointer to the first list element
 * @index: index of the node to delete
 *
 * Return: 1 (Successful), or -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}
while (--index && current->next)
current = current->next;
if (!current->next)
return (-1);
free(current->next);
current->next = current->next->next;
return (1);
}
