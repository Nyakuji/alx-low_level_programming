#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table
* @size: Size of the array
* Return: Pointer to the newly created hash table, or NULL if an error occurs
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **array;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for the array of pointers */
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	/* INitialize the array elements NULL */
	for (i = 0; i < size; i++)
		array[i] = NULL;

	new_table->size = size;
	new_table->array = array;

	return (new_table);
}
