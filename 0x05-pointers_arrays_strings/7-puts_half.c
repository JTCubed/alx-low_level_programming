#include "main.h"
/**
 * puts_half - halves a string then prints the second half
 * @str: string to be halved
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	} i = i - 2;


	for (j = 0; str[j] != '\0'; j++)
	{
		if (i % 2 == 0)
		{
			if (j > (i  / 2))
			{
				_putchar(str[j]);
			}
		} else if (i % 2 == 1)
		{
			if ((j  - 1) > (i / 2))
			{
				_putchar(str[j]);
			}
		}
		}
	_putchar(10);
}
