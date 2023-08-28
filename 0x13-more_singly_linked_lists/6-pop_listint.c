#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: head of the list
*
* Return: The head node's data(n).
*/
int pop_listint(listint_t **head)
{
	int nh;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head; /* save the current head */
	nh = temp->n; /* Get the data (n) of the head node */
	*head = (*head)->next;
	free(temp);

	return (nh);
}
