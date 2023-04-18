#ifndef STRUCT_DOG
#define STRUCT_DOG

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - define dog's name, age and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
