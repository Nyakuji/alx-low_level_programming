#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: head of the list.
* @index: The index of the node
* Return: The nth node of a listint_t lnked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	/* Traverse the list untill desired index */
	while (current !=  NULL)
	{
		if (count == index)
		{
			return (current); /* Return the node at the desired index */
		}
		count++;
		current = current->next; /* move to the next node */
	}
	/*if the desired index is out of bound, returns NULL */
	return (NULL);
}
