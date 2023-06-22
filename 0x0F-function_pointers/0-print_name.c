#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name to print
 * @f: pointer to function
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
