#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - add dog
 * @name: props
 * @age: dog props
 * @owner: owner name 's
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, namelength, ownerlength;

	for (i = 0; name[i]; i++)
		;
		namelength = i + 1;
	for (i = 0; owner[i]; i++)
		;
		ownerlength = i + 1;
	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * namelength);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < namelength; i++)
	{
		dog->name[i] = name[i];
	}
	dog->age = age;
	dog->owner = malloc(sizeof(char) * ownerlength);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ownerlength; i++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);
}
