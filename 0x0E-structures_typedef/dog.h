#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dogs bio data
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
