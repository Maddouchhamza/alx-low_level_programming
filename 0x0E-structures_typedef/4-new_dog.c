#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: pointer to dog's name
 * @age: dig's age
 * @owner: pointer to dog's owner
 *
 * Return: struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *D;

	D = malloc(sizeof(dog_t));
	if (D == NULL)
		return (NULL);
	D->name = name;
	D->age = age;
	D->owner = owner;
	return (D);
}
