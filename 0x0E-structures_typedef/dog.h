#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Holds information on a dog
 * @name: Name of the dog
 * @owner: Name of the dog owner
 * @age: Age of the dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
