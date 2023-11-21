#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked listint_t list.
 * @head: pointer to the first node of the list.
 * @n: integer to add to the list.
 * Return: pointer to the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = newNode;
	newNode = current->next;
	return (newNode);
}
