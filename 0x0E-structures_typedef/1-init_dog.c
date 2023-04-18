#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner
 *
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		_malloc(d);
		d->name = name;
		d->age = age;
		d->owner = owner;
}
/**
 * _malloc - allocates memory for a variable of type struct dog
 * @d : pointer to variable
 *
 * Return: pointer to the struct dog variable
 */
struct dog *_malloc(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	return (d);
}
