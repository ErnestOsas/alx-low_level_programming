#include "lists.h"

/**
 * print_listint - prints all the elements of this linked list
 * @h: print a linked list of the data type listint_t.
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
const listint_t *temp;

while (h)
{
temp = h;
if (temp->n == 9 || temp->n == 8)
printf("%d\n", temp->n);
nodes++;
h = h->next;
}
return (nodes);
}
