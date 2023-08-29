#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at index index of a listint_t.
* @head: pointer to the head of the list.
* @index: index of the node that should be deleted .
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	listint_t *node_to_delete;
	unsigned int i;

	if (*head == NULL)
		return (-1);/* if linked list is empty ,return failed -1) */

	if (index == 0)
	{
		temp = *head; /* save the current head */
		*head = (*head)->next; /* update the head to the next node */
		free(temp); /* frre the memory of the old head node */
		return (1); /* Return 1 (succeeded) */
	}

	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL || current->next == NULL)
		{
			/* if index out of bound , return -1 */
			return (-1);
		}
		current = current->next;
	}

	node_to_delete = current->next; /* node to be deleted */
	current->next = node_to_delete->next; /* update for previous node */
	free(node_to_delete);
	return (1);
}
