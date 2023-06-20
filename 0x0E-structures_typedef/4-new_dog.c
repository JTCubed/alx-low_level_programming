#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog
 * @age: age of dog
 * @owner: owner
 * Return: pointer to new dog
 */

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
	if (new_dog->name == NULL)
	{
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{
		new_dog->name[i] = name[i];
	}

	new_dog->owner = malloc(sizeof(char) * (j + 1));
	if (new_dog->owner == NULL)
		return (NULL);

	for  (j = 0; owner[j] != '\0'; j++)
	{
		new_dog->owner[j] = owner[j];
	}
	new_dog->age = age;
	return (new_dog);
}
