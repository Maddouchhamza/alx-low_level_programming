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
	int k, l, i = 0, j = 0;
	
	if (name == NULL || owner == NULL)
		return (NULL);
	D = malloc(sizeof(dog_t));
	if (D == NULL)
		return (NULL);
	D->age = age;
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	D->name = malloc(sizeof(char) * i);
	D->owner = malloc(sizeof(char) * j);
	if (D->name == NULL || D->owner == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		D->name[k] = name[k];
	D->name[k] = '\0';
	for (l = 0; l < j; l++)
		D->owner[l] = owner[l];
	D->owner[l] = '\0';
	return (D);
}
