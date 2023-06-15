#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		s = malloc(sizeof(char) * (i + n) + 1);
	else
		s = malloc(sizeof(char) * (i + j) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	if (n > j)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j <= n; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	return (s);
}
