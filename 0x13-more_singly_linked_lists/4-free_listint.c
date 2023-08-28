#include "lists.h"

/**
* free_listint - frees a listint_t list.
* @head: head of list
*
* Return: no return
*/
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current; /* save the current node */
		current = current->next; /* move to the next node */
		free(temp); /* free the saved node */
	}
}
