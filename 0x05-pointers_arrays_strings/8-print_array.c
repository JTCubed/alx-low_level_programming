#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array
 * @n: number of elements to print
 * @a: pointer to array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		} else if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
	}
}
