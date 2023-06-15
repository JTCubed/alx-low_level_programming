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
	int i, j;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a = malloc(sizeof(int) * height);
		for (j = 0; j < width; j++)
		{
			a = malloc(sizeof(int) * width);
		}
	}
	return (a);
}
