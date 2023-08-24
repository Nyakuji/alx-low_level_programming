#include "lists.h"

/**
* free_list - frees a list_t list
* @head: pointer parameter
* Return: no return
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next; /* move to the next node */
		free(temp->str); /* Free the duplicate string */
		free(temp); /* free the node itself */
	}
}
