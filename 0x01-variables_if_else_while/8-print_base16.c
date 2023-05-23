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
	while (i < 16)
	{
		printf("%x", i);
		i = i + 1;
	}
	printf("\n");
	return (0);
}
