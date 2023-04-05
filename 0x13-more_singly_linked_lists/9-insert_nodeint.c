#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to add in the new node
 * Return: pointer to the new node,
 * otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new = malloc(sizeof(listint_t)), *copy = *head;
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = copy;
*head = new;
return (new);
}
while (--idx && copy)
copy = copy->next;
if (!copy)
return (NULL);
new->next = copy->next;
copy->next = new;
return (new);
}
