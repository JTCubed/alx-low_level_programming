#include "main.h"

/**
 * more_numbers - prints the alphabet 10 times
 *
 */

void more_numbers(void)
{

	int x10 = 0;

	while (x10 < 10)
	{
		int w = 48;
		int count = 0;
		int j = 49;
		int k = 48;

		while (count <= 14)
		{
			if (count <= 9)
			{
				_putchar (w);
				w++;
				count++;
			}else if (count > 9)
			{
				_putchar (j);
				_putchar (k);
				k++;
				count++;
			}
		} _putchar (10);
		x10++;
	}
}
