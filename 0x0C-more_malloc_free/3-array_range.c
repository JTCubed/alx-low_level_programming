#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */


int *array_range(int min, int max)
{
	int i, res;
	int *s;

	res = max - min + 1;
	if (min < max)
		return (NULL);

	s = malloc(sizeof(int) * res);

	if (s == NULL)
		return (NULL);


	for (i = min; i <= max; i++)
	{
		s[i] = i;
	}
	return (s);
}
