#include "search_algos.h"

/**
* binary_search - Searches for a value in a sorted array using Binary Search
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The index where the value is located, or -1 if not found or
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0, right = size - 1, middle;

	/* Check for NULL array */
	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[right]);
		middle = (left + right) / 2;

		if (array[middle] == value)
		{
			/* Value found, return the index */
			return (middle);
		}

		if (array[middle] < value)
		{
			/* If value is greater, ignore the left half */
			left = middle + 1;
		}
		else
		{
			/* If value is smaller, ignore the right half */
			right = middle - 1;
		}
	}

	/* Value not found in the array */
	return (-1);
}
