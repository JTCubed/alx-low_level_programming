#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - prints all array elements
 * @array: array
 * @size: elements to print
 * @action: pointer to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
