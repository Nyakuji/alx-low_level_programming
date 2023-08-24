#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: A pointer to a pointer to the head of the linked list.
* @str:  A pointer to a constant character(string) stored in the list
*
* Return: The address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* Duplicate the input string */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;/*The new node will be last, set NULL */

	if (*head == NULL)
	{
		*head = new_node; /* if the list is empty, set as the head */
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next; /* Traverse to the last node */
		}
		temp->next = new_node; /* set the last node to new_node*/
	}
	return (new_node);
}
