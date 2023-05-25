#include "main.h"

/**
 * print_square - prints square
 * @size: size of square
 * return - 0
 */

void print_square(int size)
{
	if (!(size <= 0))
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			} _putchar(10);
		}
	} else
	{
		_putchar(10);
	}
}
