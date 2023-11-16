#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first node on list.
 * @str: string to add in new node
 * Return: address of new node.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;

	if (new == NULL)
		return (NULL);

	return (new);
}
