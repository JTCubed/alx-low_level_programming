#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */


int main(int argc, char *argv[])
{
	int i, j, k, num;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (1);
	}
	while (cents[j])
		j++;
	for (i = 0; i < j; i++)
	{
		k = num + cents[i];
		printf("%d\n", k);
	}
	return (0);
}
