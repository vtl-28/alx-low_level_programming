#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list.
 * @head: pointer to the first node of the list.
 * Return: the sum of all the data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (!current)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
