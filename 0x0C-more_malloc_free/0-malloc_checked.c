#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(sizeof(b));
	if (i == NULL)
		exit(98);
	return (i);
}
