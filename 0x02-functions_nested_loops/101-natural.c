#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */

int main(void)
{
	int k = 1;
	int to = 1024;

	for (; k < to; k++)
	{
		if (k < 1023)
		{
			if (k % 3 == 0 || k % 5 == 0)
			{
				printf("%d, ", k);
			}
		} else if (k == 1023)
		{
			printf("%d\n", k);
		}
	}
	return (0);
}
