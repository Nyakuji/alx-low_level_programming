#include "lists.h"

/**
* sum_dlistint - Calculate the sum of all data (n) in a dlistint_t list
* @head: A pointer to the head of the list
* Return: The sum of all data values, or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
