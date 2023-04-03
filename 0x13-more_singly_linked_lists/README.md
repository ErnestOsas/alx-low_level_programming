0. Print list
Write a function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf


/**
 * print_listint - prints all elements of a listint_t list.
 * @h: head of the linked list
 *
 * Return: Number of nodes.
 */
```
size_t print_listint(const listint_t *h)
{
	size_t num = 0;  // Initialize a variable to count number of nodes
	const listint_t *temp; // Create a temporary pointer to traverse the list

	// Traverse the list until the end of the list
	while (h)
	{
		temp = h;
		while (temp) // Traverse each node from the current node to the end of the list
		{
			printf("%d\n", temp->n); // Print the value of the current node
			temp = temp->next; // Move to the next node
		}
		num++; // Increment the node counter
		h = h->next; // Move to the next node
	}

	return (num); // Return the number of nodes in the list
}

```
