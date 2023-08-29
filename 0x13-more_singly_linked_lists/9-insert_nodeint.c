#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position.
* @head: pointer to the head of the list.
* @idx: position where the new node to be added.
* @n: integer
*
* Return: The address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* set the value of the new_node */
	new_node->n = n;

	/* Handle the case where idx is 0 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the previous node at (idx - 1) */
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node); /* if index is out of bound, free new_node */
			return (NULL);
		}
		current = current->next;
	}
	/* Insert the new_node btwn current and previous node */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
