#ifndef dog_h
#define dog_h

/**
 *struct dog - struct contain info about dog
 * @name:string dog's name
 * @age:float dog's age
 * @owner:string dog's dad name
 * dog_t - the new type of struct dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
