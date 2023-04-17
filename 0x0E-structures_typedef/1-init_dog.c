#include "dog.h"

/**
 * init_dog - initialise the dog with the entries
 * @d: the dog
 * @name: props for the dog
 * @age: same
 * @owner: the name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
