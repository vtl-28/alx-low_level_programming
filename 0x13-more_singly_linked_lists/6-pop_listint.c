#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer to head of the list
 * Return:  returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;


	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
