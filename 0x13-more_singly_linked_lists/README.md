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
1. List length
Write a function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);

/**
 * listint_len - Returns the number of elements
 * in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */

```
#include "lists.h"

size_t listint_len(const listint_t *h)
{
    size_t nodes; // declaring a variable 'nodes' of type size_t 
    
    for (nodes = 0; h; nodes++) // starting a loop until 'h' is not NULL
    h = h->next; // moving the pointer 'h' to the next node and incrementing the count of 'nodes'

    return (nodes); // returning the final count of nodes
}

```

2. Add node
Write a function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

```
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @n: The integer for the new node to contain.
 * 
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t)); // declare and allocate memory for new node
    if (new_node == NULL) // check if allocation failed
        return (NULL);
        
    new_node->n = n; // assign value n to the new node
    new_node->next = *head; // make the new node point to the current head node
    *head = new_node; // update the head node to point to the new node

    return (new_node); // return the address of the new node
}

````

3. Add node at the end
Write a function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

```
#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *end_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, make the new node the head */
    if (*head == NULL)
    {
        *head = new_node;
        return (*head);
    }

    /* Traverse the list until the end is reached */
    end_node = *head;
    while (end_node->next != NULL)
        end_node = end_node->next;

    /* Add the new node to the end */
    end_node->next = new_node;

    /* Return the head of the list */
    return (*head);
}

```

4. Free list
Write a function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);

```

#include "lists.h"
/**
 * free_listint - Frees a linked list of integers.
 *
 * This function takes a pointer to the head of a singly linked list of integers
 * and frees all the nodes in the list. The memory previously allocated to each
 * node is deallocated using the `free()` function.
 *
 * @head: A pointer to the head of the list to be freed.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
    listint_t *temp, *current;

    /* Iterate through the list, freeing each node */
    for (current = head; current != NULL; current = temp)
    {
        /* Hold a pointer to the next node before freeing the current one */
        temp = current->next;
        free(current);
    }
}

```
