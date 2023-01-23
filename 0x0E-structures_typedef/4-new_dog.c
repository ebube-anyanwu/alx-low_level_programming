#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a pointer
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcpy - a function that copies the string pointed to
 * by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @src: a pointer to string
 * @dest: destination
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->name = _strcpy(newDog->name, name);

	newDog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->owner);
		return (NULL);
	}

	newDog->owner = _strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
