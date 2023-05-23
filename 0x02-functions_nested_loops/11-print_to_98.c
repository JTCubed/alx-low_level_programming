#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by new line
 *
 *@n : int input
 *
 * Return : 0
 */

void print_to_98(int n)
{
	int z;

	z = n;
	if (z <= 98)
	{
		for (; z <= 98; z++)
		{
			if (z < 98)
			{
				printf("%d, ", z);
			} else if (z == 98)
			{
				printf("%d", z);
			}
		} printf("\n");
	} else if (z >= 98)
	{
		for (; z >= 98; z--)
		{
			if (z > 98)
			{
				printf("%d, ", z);
			} else if (z == 98)
			{
				printf("%d", z);
			}
		} printf("\n");
	}
}
