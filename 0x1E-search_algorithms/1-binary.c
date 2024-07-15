#include "search_algos.h"

/**
 * binary_search - a binary search function
 * @array: the array
 * @size: the size of the array
 * @value: value being searched
 * Return: found value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL || size == 0)
		return (-1);


	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		searching(array + left, right - left + 1);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * searching - prints the array being searched
 * @array: the array
 * @size: the size of the array
 */
void searching(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		if (i != size - 1)
		{
			printf("%d, ", array[i]);
		} else
		{
			printf("%d", array[i]);
		}
	printf("\n");
}
