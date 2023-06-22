#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true
 * @array: array
 * @size: size of elements
 * @cmp: pointer to funct
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
		if (i == size)
			return (-1);
	}
	return (0);
}
