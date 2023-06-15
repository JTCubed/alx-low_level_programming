#include "main.h"
#include <stdlib.h>

/**
 * _strdup - check the code for ALX School students.
 * @str: str
 * Return: Always 0.
 */


char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
