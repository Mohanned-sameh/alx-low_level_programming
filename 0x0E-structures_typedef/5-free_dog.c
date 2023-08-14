#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_dog - free memory
 * @d: array
 * @dog_t: structure
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
