#include <stdio.h>

/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (!(i == 50 || i == 52))
		{
			putchar(i);
		}
	}
	putchar('\n');
}
