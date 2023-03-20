#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a C Program that initializes a variable of type struct dog.
 * @d: A given dog pointer to be initialized
 * @name: The given dog name
 * @age: The given dog age
 * @owner: The given dog owner
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
