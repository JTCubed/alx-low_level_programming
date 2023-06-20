#include <stdlib.h>
#include "dog.h"


/**
* free_dog - frees memory allocated
* @d: dog to free
* Return : nothing
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
