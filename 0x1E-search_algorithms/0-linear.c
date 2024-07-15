#include "search_algos.h"

/**
 * linear_search - linear search function
 * @array: array being searched
 * @size: size of the array
 * @value: value being searched
 * Return: int being searched or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	int index;
	size_t i;

	index = 0;
	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[i] == value)
			return (index);
		index++;
	}
	return (-1);
}
