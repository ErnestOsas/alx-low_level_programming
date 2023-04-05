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

5. Free
Write a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL

```
#include "lists.h"

/**
 * free_listint2 - Frees the struct listint_t.
 * @head: The pointer to the address.
 *
 * Output: Sets head to NULL.
 */
void free_listint2(listint_t **head)
{
    listint_t *temp; // Declare a temporary pointer to hold the next node.

    if (head == NULL) // Check if the head pointer is NULL.
        return; // If it is, return immediately.

    while (*head != NULL) // Loop through the linked list until head is NULL.
    {
        temp = (*head)->next; // Store the next node in the temporary pointer.
        free(*head); // Free the memory allocated for the current node.
        *head = temp; // Move the head pointer to the next node.
    }

    head = NULL; // Set the value of the head pointer to NULL to indicate that the list has been successfully freed.
}


```
6. Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0

```
#include "lists.h"  // include the header file

/**
 * pop_listint - Deletes the head node of a singly linked list.
 * @head: A pointer to the address of the listint_t list head.
 *
 * This function deletes the head node of a singly linked list. If the linked
 * list is empty, the function returns 0. Otherwise, it returns the data (n)
 * of the deleted node.
 *
 * Return: 0 if the linked list is empty. Otherwise, the data (n) of the
 *         deleted head node.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;  // create a temporary node pointer
    int data = 0;  // initialize data to 0

    if (*head == NULL)  // if the list is empty (head pointer is NULL)
    {
        return (data);  // return 0
    }
    temp = *head;  // assign the head node to the temp pointer
    data = temp->n;  // assign the data of the head node to the data variable
    *head = (*head)->next;  // set the new head node to the next node
    free(temp);  // free the old head node from memory
    return (data);  // return the data of the deleted head node
}

```

7. Get node at index
Write a function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL

```
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
unsigned int node; // Counter variable to keep track of the node index
node = 0; // Initializing the counter variable to 0

// If the head of the linked list is NULL, return NULL
if (head == NULL)
	return (NULL);

// Loop until the counter reaches the index or the end of the list is reached
while (node < index)
{
	// If the next node is NULL and the index hasn't been reached yet, return NULL
	if (head->next == NULL)
		return (NULL);

	// Move to the next node and increment the counter
	head = head->next;
	node++;
}

// Return a pointer to the node at the given index
return (head);

```

8. Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0

```
// Include the "lists.h" header file which contains the definition of listint_t
#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * This function takes in a pointer to the head of a linked list of type listint_t
 * and returns the sum of all the data (integers) in the linked list.
 *
 * Return: the sum of all the integers in the linked list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	// Initialize a variable "sum" to 0 to keep track of the running total
	int sum = 0;

	// Traverse the linked list while the current node is not NULL
	while(head)
	{
		// Add the value of the "n" member of the current node to the sum variable
		sum = sum + head->n;

		// Move the pointer to the next node in the linked list
		head = head->next;
	}

	// Return the sum of all the integers in the linked list
	return (sum);
}

```

