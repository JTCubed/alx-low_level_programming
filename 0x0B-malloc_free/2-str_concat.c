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

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0';)
	{
		i++;
	}
	for (j = 0; s2[j] != '\0';)
	{
		j++;
	}

	v = malloc(sizeof(char) * (i + j + 1));
	if (v == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
	{
		v[x] = s1[x];
	}
	for (z = 0; z < (j + i); z++)
	{
		v[x] = s2[z];
		x++;
	}
	return (v);
}
