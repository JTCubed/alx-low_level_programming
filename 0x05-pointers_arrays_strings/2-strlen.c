#include "main.h"

 /**
  * strlen - prints the length of the string in int
  * _strlen - length of the string
  *
  * @s: the string
  *
  */

int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		/*_putchar(i + '0');*/
		j = j + 1;
	}
	return (j);
}
