#include "main.h"
/**
 * print_rev - prints strings in reverse
 * @s: the string as input
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(10);
}
