#include "lists.h"

/**
* delete_dnodeint_at_index - Delete the node at a given index.
* @head: A pointer to a pointer to the head of the list
* @index: The index of the node to be deleted (starting from 0)
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (current == NULL || index == 0)
	{
		if (current != NULL)
			*head = current->next;
		if (current != NULL && current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			if (current->next != NULL)
				current->next->prev = current->prev;
			if (current->prev != NULL)
				current->prev->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}

	return (-1);
}
