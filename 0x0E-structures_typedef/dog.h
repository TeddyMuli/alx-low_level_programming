#ifndef _DOG_
#define _DOG_

/**
 * struct dog - the structure
 * @name: name
 * @age: integer
 * @owner: integer
 */
typedef struct dog 
{
	char *name;
	char *owner;
	float age;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

my_dog *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
