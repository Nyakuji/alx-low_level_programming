#include "hash_tables.h"

/**
* create_node - Creates a new node for the hash table
* @key: The key (cannot be an empty string)
* @value: The value associated with the key (must be duplicated)
*
* Return: Pointer to the new node or NULL on failure
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
* hash_table_set - Adds or updates an element in the hash table
* @ht: The hash table you want to add or update the key/value to
* @key: The key (cannot be an empty string)
* @value: The value associated with the key (must be duplicated)
*
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;
	char *new_value;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	/* Check if the key already exists; if so, update the value*/
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);

			if (new_value == NULL)
				return (0);
			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}

	/* Key doesn't exist; create a new node and add it at */
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
