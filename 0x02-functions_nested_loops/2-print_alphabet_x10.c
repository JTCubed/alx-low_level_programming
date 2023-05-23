#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{

	int x10 = 0;

	while (x10 < 10)
	{
		int w = 97;

		while (w <= 122)
		{
			_putchar (w);
			w++;
		} _putchar (10);
		x10++;
	}
}
