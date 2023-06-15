#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds argv arguments numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */


int main(int argc,char *argv[])
{
	int no = 0;
	int res = 0;
	int i, num;

	if (argc == 1)
	{
		printf("%d\n", no);
	}
	for (i = 0; i <= argc; i++)
	{
		num = atoi(argv[i]);
		res = res + num;

	}
	printf("%d\n", res);
	return (0);
}
