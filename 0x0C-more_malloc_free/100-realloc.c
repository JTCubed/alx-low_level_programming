#include <stdlib.h>
#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *s1;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (ptr);
	}
	if (ptr == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = ptr;
	s1 = ptr;
	for (i = 0; i < old_size; i++)
		s[i] = s1[i];

	return (s);
}
