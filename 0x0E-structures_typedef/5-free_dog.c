#include "dog.h"
#include "stdlib.h"

/**
 * free_dog - Frees struct dog.
 *
 * @d: struct dog to free.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->name != NULL)
		free(d->owner);

	free(d);
}
