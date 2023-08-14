#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *init_dog - function that initialize a variable of type struct dog
 *
 *@d: pointer to struct dog
 *@name: pointer to the var name
 *@age: pointer the to age
 *@owner: pointer the to owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
