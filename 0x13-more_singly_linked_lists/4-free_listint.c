#include "lists.h"
/**
 * free_listint - Frees the struct listint_t.
 * @head: the pointer to free.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *current;

	for (current = head; current != NULL; current = temp)
	{
		temp = current->next;
		free(current);
	}
}
