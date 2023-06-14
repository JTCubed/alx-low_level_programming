#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int **a;

	a = malloc((sizeof(int) * width) * (sizeof(int)) * height);

	if (width <= 0 || height <= 0)
	{
		free(a);
		return (NULL);
	}
	free(a);
	return (a);
}
