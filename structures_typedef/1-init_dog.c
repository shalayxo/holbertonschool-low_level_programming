#include <stddef.h>
#include "dog.h"

/**
 * init_dog -  initializes a dog structure
 * @d: a dog structure.
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog.
 *
 * Return: nothing
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
