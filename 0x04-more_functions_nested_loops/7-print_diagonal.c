#include "main.h"

/**
 * print_diagonal - prints backslash diagonally downwards
 * @n : number of lines
 * return - 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (!(n <= 0))
	{
		for (i = 0; i <= n - 1; i++)
		{
			j = i;
			if (j > 0)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(32);
				}
			}
			_putchar(92);
			_putchar(10);
		}
	} else
	{
		_putchar(10);
	}
}
