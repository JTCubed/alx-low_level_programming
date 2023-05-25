#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
