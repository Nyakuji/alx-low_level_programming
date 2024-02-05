#include "search_algos.h"

/**
* exponential_search - Searches for a value in a sorted array
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
* Return: The first index where the value is located, or -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j, left = i / 2, right = (i < size) ? i : size - 1;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		i *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", 
		i / 2, (i < size) ? i : size - 1);
	left = i / 2;
	right = (i < size) ? i : size - 1;
	while (left <= right)
	{
		size_t mid = (left + right) / 2;

		printf("Searching in array: ");
		for (j = left; j <= right; j++)
		{
			printf("%d", array[j]);
			if (j < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
