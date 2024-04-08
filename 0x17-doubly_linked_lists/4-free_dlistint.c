#include "lists.h"

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;  /* Assign the next node to tmp */
		free(head);  /* Free the current node */
		head = tmp;  /* Move head to the next node */
	}
}
