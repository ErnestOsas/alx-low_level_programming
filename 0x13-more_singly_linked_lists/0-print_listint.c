#include "lists.h"
/**
 * print_listint - prints all the elements of this linked list
 * @h: print a linked list of the data type listint_t.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t node = 0;

while (h)
{
printf("%d\n", h->n);
node++;
h = h->next;
}
return (node);
}
