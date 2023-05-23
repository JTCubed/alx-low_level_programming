#include "main.h"

/**
 * print_last_digit - check the code
 *
 * Return: Always 0.
 */


int print_last_digit(int i)
{
	if (i < 0)
	{
		i = i * -1;
		i = i % 10;
		return (i);
	} else if (i >= 0)
	{
		i = i % 10;
		return (i);
	}
	return (0);
}
