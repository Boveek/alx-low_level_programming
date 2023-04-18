#include "dog.h"
#include <stdio.h>
/**
 * free_dog - free allocated space
 * @d: memory to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
