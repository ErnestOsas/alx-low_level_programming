#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	const list_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}

	return (count);
}
