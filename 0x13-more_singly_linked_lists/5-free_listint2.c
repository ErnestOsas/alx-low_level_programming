#include "lists.h"
/**
 * free_listint2 - Frees the struct listint_t.
 * @head: The pointer to the address.
 *
 * Output: Sets head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
