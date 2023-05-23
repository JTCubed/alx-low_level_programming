#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued fibonacci terms < 4000000
 *
 *Return - 0
 */

int main(void)
{
	long long x = 1;
	long long z = 2;
	long long sum = 0;
	long long sum2 = 0;

	for (long long count = 2; count <= 50; count++)
	{
		sum = x + z;
		x = z;
		z = sum;
		if (sum <= 4000000)
		{
			if (sum % 2 == 0)
			{
				sum2 = sum2 + sum;
			}
		}
	} printf("%lld\n", sum2);
}
