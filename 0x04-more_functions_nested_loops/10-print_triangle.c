#include "main.h"

/**
 * print_triangle - prints triangle
 * @size : size of triangle
 * return - 0
 */

void print_triangle(int size)
{
	if (!(size <= 0))
	{
		int i;
		int j;
		/*int k;*/

		for (i = 0; i < size; i++)
		{
			for (j = 0;i < size; j++)
			{
				_putchar(32);
			}
			for (j = 0; i + 1; j++)
			{
				_putchar(35);
			}
		} _putchar(10);
	} else
	{
		_putchar(10);
	}
}
