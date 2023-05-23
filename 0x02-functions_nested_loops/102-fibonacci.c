#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 */

int main(void)
{
	long long x = 1;
	long long z = 2;
	long long sum = 0;

	for (long long count = 2; count <= 50; count++)
	{
		sum = x + z;
		printf("%lld, ", sum);
		x = z;
		z = sum;
	} printf("\n");
}
