#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, j;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		sum = sum + j;
	}
	return (sum);
}
