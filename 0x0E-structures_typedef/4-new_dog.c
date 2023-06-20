#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 *
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));

	if (nd == NULL)
		return (NULL);


	nd->name = malloc(strlen(name) + 1);
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	strcpy(nd->name, name);


	nd->owner = malloc(strlen(owner) + 1);
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	strcpy(nd->owner, owner);

	nd->age = age;

	return (nd);
}

