#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type of a dog
 * @name: Name of a dog
 * @age: Age of dog
 * @owner: Owner of dog.
 */
struct dog

{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);



typedef struct dog dog_t;



#endif
