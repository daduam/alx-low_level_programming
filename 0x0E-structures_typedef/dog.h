#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Holds information on a dog
 * @name: Name of the dog
 * @owner: Name of the dog owner
 * @age: Age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
