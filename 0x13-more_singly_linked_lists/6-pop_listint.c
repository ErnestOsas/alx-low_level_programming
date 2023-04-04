#include "lists.h"
/**
 * pop_listint - Deletes the head node.
 * @head: A pointer to the address of the
 *        listint_t list head.
 *
 * Return: 0 if the linked list is empty.
 *         Otherwise - The assigned head node data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head != NULL)
		return (data);
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
