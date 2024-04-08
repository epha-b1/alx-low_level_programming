#include "lists.h"

/**
 * sum_listint - Calculates the su, of all the data (n) in a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data values in the lis, or 0 if empty.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
