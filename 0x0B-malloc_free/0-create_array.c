#include "main.h"
#include <stdlib.h>

/**
 * create_array - check the code for ALX School students.
 * @size: size
 * @c: char
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
