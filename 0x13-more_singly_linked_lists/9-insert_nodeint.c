#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node of the list
 * @idx: position to insert the new node
 * @n: data to store in the new node
 * Return: pointer to the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	unsigned int counter = 0;

	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (current != NULL)
	{
		if (counter == idx)
		{
			prev->next = newNode;
			newNode->next = current;
			return (newNode);
		}
		prev = current;
		current = current->next;
		counter++;
	}
	return (NULL);
}
