#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i;
	int j;
	int k;
	j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i != j && i != k && j != k && i < j && i < k && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (!(i == 7 && j == 8 && k == 9))
					{
						putchar(44);
						putchar(32);
					} else if (i == 7 && j == 8 && k == 9)
					{
						putchar(10);
					}
				}
			}
		}
	}
	return (0);
}
