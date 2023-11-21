#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to head of list
 * @index: node to delete
 * Return: return 1 if succeeded and -1 if failed
 */




int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp = *head;
	listint_t *current = NULL;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (counter < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		counter++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);

}
