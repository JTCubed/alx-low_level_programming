#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *v;
	int i, j, x, z;

	for (i = 0; s1[i] != '\0';)
	{
		i++;
	}
	for (j = 0; s2[j] != '\0';)
	{
		j++;
	}

	v = malloc(sizeof(char) * (i + j));

	for (x = 0; s1[x] != '\0'; x++)
	{
		v[x] = s1[x];
	}
	for (z = 0; z < j; z++)
	{
		v[x] = s2[z];
		x++;
	}
	return (v);
}
