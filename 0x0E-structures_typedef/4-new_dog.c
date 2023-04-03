#include "dog.h"
#include <stdlib.h>

/**
* _strlen - get the length of a string.
* @str: a string.
*
* Return: length of the string.
*/
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
* _strcopy - Copies a string src to dest.
* @dest: The string location to copy to.
* @src: The source string.
* Return: The pointer to dest.
*/
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
* new_dog - Creates a new dog_t dog.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
*
* Return: The new struct dog_t.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _strcopy(d->name, name);
	d->age = age;
	d->owner = _strcopy(d->owner, owner);
	return (d);
}
