#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the first node on list.
 */

void free_list(list_t *head)
{
	list_t *current;

	current = head;

	while (current != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
