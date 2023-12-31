#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * listint_t list.
 * @h: pointer to the head of the list.
 * Return: the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
