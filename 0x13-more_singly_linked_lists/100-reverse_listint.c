#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: pointer to the head of the linked list
 * Return: pointer to the new head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
