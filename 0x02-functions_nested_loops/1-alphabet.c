#include "main.h"


/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int w = 97;

	while (w <= 122)
	{
		_putchar(w);
		w++;
	} _putchar(10);
}
