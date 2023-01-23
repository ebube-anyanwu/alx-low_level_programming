#ifndef DOG_H
#define DOG_H

/**
 * struct dog - description for dog
 * @name: pointer to name
 * @age: dog age
 * @owner: dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
