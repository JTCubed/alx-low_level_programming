#include "main.h"
#include <stdio.h>

int main(int argc __attribute__((unused)), char *argv[])
{
	int res, res0, res1;

	res0 = int atoi(*argv[1]);
	res1 = int atoi(*argv[2]);
	res = res0 * res1;
	return (res);
}
