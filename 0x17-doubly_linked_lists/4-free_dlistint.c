#include "lists.h"

/**
* free_dlistint - Free a dlistint_t list
* @head: A pointer to the head of the list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
