#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node w are searching for
 * otherwise NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;

node = 0;
if (head == NULL)
return (NULL);
while (node < index)
{
if (head->next == NULL)
return (NULL);
head = head->next;
node++;
}
return (head);
}
