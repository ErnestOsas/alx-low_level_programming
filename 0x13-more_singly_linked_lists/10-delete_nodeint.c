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
listint_t *tmp, *copy = *head;

if (copy == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}
while (--index && copy->next)
copy = copy->next;
if (!copy->next)
return (-1);
tmp = copy->next;
copy->next = tmp->next;
free(tmp);
return (1);
}
