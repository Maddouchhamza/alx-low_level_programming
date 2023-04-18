#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function that frees dogs
 * @d: pointer to a dog_t dog
 *
 * Return: no return
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
