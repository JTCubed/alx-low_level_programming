#include "main.h"

/**
 * swap_int - check the code
 * @a: first int
 * @b: second int
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int i = *b;
	int o = *a;

	*b = o;
	*a = i;
}
