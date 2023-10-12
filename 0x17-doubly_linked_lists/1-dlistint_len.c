#include "lists.h"

/**
* dlistint_len - Get the number of elements in a dlistint_t list
* @h: A pointer to the head of the list
* Return: The number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
