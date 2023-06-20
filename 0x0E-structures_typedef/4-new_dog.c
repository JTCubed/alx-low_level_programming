#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	new_dog->name = malloc(sizeof(char) * (i + 1));

	for (i = 0; name[i] != '\0'; i++)
	{
		new_dog->name[i] = name[i];
	}

	new_dog->owner = malloc(sizeof(char) * (j + 1));

	for  (j = 0; owner[j] != '\0'; j++)
	{
		new_dog->owner[j] = owner[j];
	}
	new_dog->age = age;
	return (new_dog);
}
