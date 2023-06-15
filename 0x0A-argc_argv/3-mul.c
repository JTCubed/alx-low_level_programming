#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */


int main(int argc __attribute__((unused)), char *argv[])
{
	int res, res0, res1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	res0 = atoi(argv[1]);
	res1 = atoi(argv[2]);
	res = res0 * res1;
	printf("%d\n", res);
	return (0);
}
