#include "main.h"

/**
 *print_times_table - prints n times table
 *
 *@n : input int to make times table
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int row, column;

	if (n > 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				int product = row * column;

				if (column == 0)
				{
					_putchar(product + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');

					if (product < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(product + '0');
					} else if (product < 100)
					{
						_putchar(product / 10 + '0');
						_putchar(' ');
						_putchar(product % 10 + '0');
					} else
					{
						_putchar(product / 100 + '0');
						_putchar((product / 10) % 10 + '0');
						_putchar(product % 10 + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
