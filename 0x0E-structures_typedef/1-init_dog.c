#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - entry point
 * @d: ...
 * @name: ...
 * @age: ...
 * @owner: ...
 * Return: void
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
