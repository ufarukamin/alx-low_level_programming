#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: struct dog
 * @name: string
 * @age: number age
 * @owner: string
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
