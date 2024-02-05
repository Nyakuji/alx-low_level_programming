#include "search_algos.h"

/**
* jump_search - Searches for a value in a sorted array using Jump Search alg
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The first index where the value is located, or -1
*/
int jump_search(int *array, size_t size, int value)
{
	int jump = 0;
	int i = 0;
	int b = 0;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	while (i < (int)size && array[i] < value)
	{
		b = i;
		i = b + jump;

		if (b < (int)size)
			printf("Value checked array[%d] = [%d]\n", b, array[b]);
	}

	if (b >= (int)size && array[size - 1] != value)
		b -= jump;
	printf("Value found between indexes [%d] and [%d]\n", b, b + jump);

	while (b < (int)size && array[b] < value)
	{
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		b += 1;
	}

	if (b < (int)size && array[b] == value)
	{
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		return (b);
	}

	return (-1);
}
