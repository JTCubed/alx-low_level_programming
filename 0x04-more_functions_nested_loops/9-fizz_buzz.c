#include <stdio.h>
#include "main.h"

/**
 * main - Fizz Buzz, 1 -100. Fizz 9 multiples. Buzz 5 multiple FizzBuzz both
 * Return - 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3 == 0 || i % 5 == 0))
		{
			printf("%d ", i);
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
	} printf("\n");
	return (0);
}
