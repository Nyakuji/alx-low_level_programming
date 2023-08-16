#include "function_pointers.h"

/**
 * int_index - searches for integers
 * @array: input integer array
 * @size: the of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: index of the first elements for which the cmp
 * function does not return 0.If no elements matches, return -1.
 * if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
