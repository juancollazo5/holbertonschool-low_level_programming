#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Write a function that frees dogs.
 * @d: string
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
