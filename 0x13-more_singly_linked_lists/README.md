# Project Title: More Singly Linked Lists

This project contains a set of C functions that manipulate singly linked lists. The functions include tasks like printing a list, finding the length of a list, adding nodes, deleting nodes, and more.

## Task List

### 0. Print List
- Function: `size_t print_listint(const listint_t *h);`
- Description: This function prints all the elements of a `listint_t` list and returns the number of nodes.
- Format: See example in task description.

### 1. List Length
- Function: `size_t listint_len(const listint_t *h);`
- Description: This function returns the number of elements in a `listint_t` list.

### 2. Add Node
- Function: `listint_t *add_nodeint(listint_t **head, const int n);`
- Description: Adds a new node at the beginning of a `listint_t` list and returns the address of the new element or `NULL` if it fails.

### 3. Add Node at the End
- Function: `listint_t *add_nodeint_end(listint_t **head, const int n);`
- Description: Adds a new node at the end of a `listint_t` list and returns the address of the new element or `NULL` if it fails.

### 4. Free List
- Function: `void free_listint(listint_t *head);`
- Description: Frees a `listint_t` list.

### 5. Free List (with Set Head to NULL)
- Function: `void free_listint2(listint_t **head);`
- Description: Frees a `listint_t` list and sets the head to `NULL`.

### 6. Pop
- Function: `int pop_listint(listint_t **head);`
- Description: Deletes the head node of a `listint_t` linked list and returns the head node's data (`n`). Returns 0 if the list is empty.

### 7. Get Node at Index
- Function: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
- Description: Returns the nth node of a `listint_t` linked list, where `index` is the index of the node (starting at 0). Returns `NULL` if the node does not exist.

### 8. Sum List
- Function: `int sum_listint(listint_t *head);`
- Description: Returns the sum of all the data (`n`) of a `listint_t` linked list. Returns 0 if the list is empty.

### 9. Insert Node at Index
- Function: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
- Description: Inserts a new node at a given position in a `listint_t` linked list. Returns the address of the new node or `NULL` if it fails.

### 10. Delete Node at Index
- Function: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
- Description: Deletes the node at a specified index of a `listint_t` linked list. Returns 1 if it succeeds, -1 if it fails.

## Usage
Each task is implemented in its respective C file (e.g., `0-print_listint.c` for Task 0). To use these functions, you can include the appropriate header file (`lists.h`) and compile your program with the necessary C files.

### Example
```c
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;

    add_nodeint(&head, 5);
    add_nodeint(&head, 10);
    add_nodeint(&head, 15);

    print_listint(head);

    free_listint2(&head);

    return (0);
}

### Repository Information

- GitHub Repository: alx-low_level_programming
- Directory: 0x13-more_singly_linked_lists