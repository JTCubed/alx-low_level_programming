#include "function_pointers.h"
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b)
{
	if (a != NULL && b != NULL)
	{
		return (a + b);
	}
}

int op_sub(int a, int b)
{
	if (a != NULL && b != NULL)
		return (a - b);
}

int op_mul(int a, int b)
{
	if (a != NULL && b != NULL)
		return (a * b);
}

int op_div(int a, int b)
{
	if (a != NULL && b != NULL && b != 0)
		return (a / b);
	else if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (0);

}

int op_mod(int a, int b)
{
	if (a != NULL && b != NULL && b != 0)
		return (a % b);
	else if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (0);

}
