#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 9)
		{
			printf("%d, ", i);
			i = i + 1;
		} else
		{
			printf("%d", i);
			i = i + 1;
		}
	}
	printf("\n");
	return (0);
}
