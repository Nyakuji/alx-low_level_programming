#include "lists.h"

/**
* free_listint2 - frees a listint_t list.
* @head: head of the list.
*
* Return: no return.
*/
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp;

	if (head == NULL)
	{
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*head = NULL; /* set the head to NULL to indicate an empty list */
	}
}
