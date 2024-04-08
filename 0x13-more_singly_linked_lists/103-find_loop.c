#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL if none.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;	/* Move one step at a time. */
		hare = hare->next->next;	/* Move two steps at a time. */

		if (tortoise == hare)	/* If they meet, there is a loop. */
		{
			tortoise = head;	/* Reset one pointer to the head. */
			while (tortoise != hare) /* Move both pointers at the same pace. */
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise); /* Return the start of the loop. */
		}
	}

	return (NULL); /* No loop found. */
}
