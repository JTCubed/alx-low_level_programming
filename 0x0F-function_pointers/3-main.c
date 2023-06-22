#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i = atoi(argv[1]), j = atoi(argv[3]);
	char *op = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((get_op_func(op) == NULL))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);

}
