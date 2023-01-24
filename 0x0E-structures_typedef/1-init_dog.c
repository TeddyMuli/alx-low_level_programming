#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - entry point
 * @d: ...
 * @name: ...
 * @age: ...
 * @owner: ...
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
