#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;
	if (separator == NULL)
		return;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
