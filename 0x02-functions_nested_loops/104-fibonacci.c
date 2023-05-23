#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 *Return - 0
 */

int main(void)
{
	int x = 1;
	int z = 2;
	int sum = 0;

	for (int count = 2; count <= 98; count++)
	{
		sum = x + z;
		printf("%d, ", sum);
		x = z;
		z = sum;
	} printf("\n");
}
