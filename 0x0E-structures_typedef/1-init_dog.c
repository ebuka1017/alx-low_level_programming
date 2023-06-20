#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable of type struct dog
 *
 * @d: var
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
