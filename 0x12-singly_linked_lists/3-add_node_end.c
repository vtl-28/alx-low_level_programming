#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the first node on list.
 * @str: string to add in new node
 * Return: address of new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = NULL;

	current = *head;

	if (current == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (*head);
}
