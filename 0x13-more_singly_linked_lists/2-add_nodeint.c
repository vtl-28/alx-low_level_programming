#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked listint_t list.
 * @head: pointer to the first node of the list.
 * @n: integer to add to the list.
 * Return: pointer to the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = current;
	current = newNode;
	return (newNode);
}
