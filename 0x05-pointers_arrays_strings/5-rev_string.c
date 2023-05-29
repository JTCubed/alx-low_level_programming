#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints strings in reverse
 * @s: the string as input
 *
 */

void rev_string(char *s)
{

	int i, j;
	int z = 0;
	char temp;

	while (s[z] != '\0')
	{
		z++;
	}

	for (i = 0, j = z - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
