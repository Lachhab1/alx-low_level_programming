#include "dog.h"
#include <stdio.h>

/**
 * print_dog - affiche properties of dog
 * @d: our dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s", d->owner);
	}
}
