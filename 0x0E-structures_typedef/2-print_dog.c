#include "dog.h"

/**
 * print_dog - affiche properties of dog
 * @d: our dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
